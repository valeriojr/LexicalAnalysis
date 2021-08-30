import json
import string
from datetime import datetime

# Transições especiais no autômato. Quando uma transição dessa é encontrada é criada uma transição para cada elemento do
# valor no dicionário
transition_sets = {
    'dig': string.digits[1:],
    'Dig': string.digits,
    'let': string.ascii_letters,
    'char': string.printable
}

# Lista de palavras especiais e as categorias correspondentes
keywords = {
    'if': 'If',
    'for': 'For',
    'while': 'While',
    'else': 'Else',
    'true': 'Bool',
    'false': 'Bool',
    'bool': 'TypeBool',
    'char': 'TypeChar',
    'int': 'TypeInt',
    'float': 'TypeFloat',
    'string': 'TypeString',
    'return': 'Return',
}


def main():
    with open('automaton.json', 'r') as fp:
        automaton = json.load(fp)

    # Obtém todas as categorias de tokens a partir dos nomes nos estados
    tokens = {node['text'] for node in automaton['nodes'] if node['text'] != ''}
    # Também adiciona aquelas presentes nas palavras reservadas e que não estão presentes no autômato
    for keyword_token in keywords.values():
        tokens.add(keyword_token)

    # Converte os diferentes tipos de aresta para uma representação comum e adiciona na tabela de transições
    transitions = {state: {} for state in range(len(automaton['nodes']))}
    for link in automaton['links']:
        if link['type'] == 'StartLink':
            continue
        elif link['type'] == 'Link':
            src = link['nodeA']
            dst = link['nodeB']
        elif link['type'] == 'SelfLink':
            src = link['node']
            dst = link['node']
        else:
            raise NotImplemented(f'The link type "{link["type"]}" is not implemented')

        if link['text'] in transition_sets:
            for c in transition_sets[link['text']]:
                transitions[src][c] = dst
        elif len(link['text']) == 1:
            transitions[src][link['text']] = dst

    # Nomes das categorias no enum
    categories = [token.replace(' ', '') for token in sorted(tokens)]
    # Parâmetros em comum que serão passados tanto para o template do cabeçalho quanto do arquivo-fonte
    params = {
        # Data em que o arquivo foi gerado
        'date': datetime.strftime(datetime.now(), '%d/%m/%Y'),
        # Quantidade de estados
        'len_nodes': len(automaton['nodes']),
        # Quantidade de tokens
        'len_tokens': len(tokens),
    }

    # Carrega os templates
    template_header = open('header.template', 'r').read()
    template_source = open('source.template', 'r').read()

    # Substitui os parâmetros no cabeçalho, declarando as variáveis globais e a enumeração de categorias
    with open('header.h', 'w') as f:
        f.write(template_header.format_map({
            **params,
            'categories': ',\n'.join([f'\t{category} = {i}' for i, category in enumerate(categories)]),
        }))

    with open('header.cpp', 'w') as f:
        # Função auxiliar para converter um dicionário char->int no código em C++ correspondente
        def transition_table(state):
            return 'std::unordered_map<char, int>({{ {transitions} }})'.format_map({
                'transitions': ', '.join([f'{{{ord(char)}, {s}}}' for char, s in transitions[state].items()])
            })

        # Substitui as variáveis no arquivo-fonte
        f.write(template_source.format_map({
            **params,
            'category_names': ',\n'.join([f'\t"{cat}"' for cat in categories]),
            'transitions': ',\n'.join(['\t' + transition_table(state) for state in transitions]),
            'state_tokens': ',\n'.join(
                ['\t' + n['text'].replace(' ', '') if n['isAcceptState'] else '\tInvalid' for n in automaton['nodes']]),
            'keywords': ',\n'.join([f'\t{{"{kw}", {tc}}}' for kw, tc in keywords.items()])
        }))


if __name__ == '__main__':
    main()
