import json
import os
import string

transition_sets = {
    'dig': string.digits[1:],
    'Dig': string.digits,
    'let': string.ascii_letters,
    'char': string.printable
}


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

    tokens = {node['text'] for node in automaton['nodes'] if node['text'] != ''}
    for keyword_token in keywords.values():
        tokens.add(keyword_token)

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

    with open('header.h', 'w') as f:
        # Include
        f.write('\n'.join(["#include <unordered_map>"]) + '\n')

        categories = [token.replace(' ', '') for token in sorted(tokens)]
        # Category enum
        f.write('enum TokenCategory {Invalid=-1,' + ', '.join(categories) + '};\n')
        # Category strings
        f.write(f'const char TokenCategoryNames[{len(tokens)}][20] = {{\n' + ',\n'.join(
            [f'"{cat}"' for cat in categories]) + '\n}\n;')
        # Transition table
        f.write(f'std::unordered_map<char, int> transitions[{len(automaton["nodes"])}] = {{\n')
        for state in transitions:
            f.write('std::unordered_map<char, int>({')
            f.write(', '.join([("{%d, %d}" % (ord(c), s)) for c, s in transitions[state].items()]))
            f.write('}),\n')

        f.write('};\n')
        f.write('''
std::ostream& operator<<(std::ostream& stream, const TokenCategory& category) {
    stream << TokenCategoryNames[category];
    return stream;
}
''')
        f.write('const TokenCategory stateToken[] = {\n')
        for node in automaton['nodes']:
            if node['isAcceptState']:
                f.write(node['text'].replace(' ', '') + ',\n')
            else:
                f.write('Invalid,\n')
        f.write('};\n')
        # Keywords
        f.write('std::unordered_map<std::string, int> keywords = std::unordered_map<std::string, int>({\n' +
                ',\n'.join(['{"%s", %s}' % (keyword, token_category) for keyword, token_category in keywords.items()]) +
                '});\n')


if __name__ == '__main__':
    main()
