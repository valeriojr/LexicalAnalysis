//
// Created by valerio on 29/08/2021.
//

#include <iostream>

#include "Scanner.h"
#include "header.h"


void Scanner::postProcess(Token &token) {
    switch (token.category) {
        case TokenCategory::EndOfLine:
            onEndOfLine();
            break;

        case TokenCategory::Identifier:
            // Verifica se o identificador, na verdade, é uma palavra especial. Caso positivo a categoria passa a ser a da
            // tal palavra
            if (keywords.find(token.lexeme) != keywords.end()) {
                token.category = (TokenCategory) keywords[token.lexeme];
            }
            break;
    }
}


Scanner::Scanner() {
    lineNumber = 1;
    column = 1;
}


void Scanner::ignoreWhitespaces(const std::string &line) {
    // Come os espaços em branco
    while (column <= line.size() && std::isspace(line[column - 1])) {
        column++;
    }
}


Token Scanner::getNextToken(const std::string &line) {
    ignoreWhitespaces(line);

    char c = line[column - 1];
    int state = 0;
    Token token = {TokenCategory::Invalid, lineNumber, column};

    // Checa se a linha foi totalmente processada
    if (column > line.size()) {
        // Retorna um token EOL que "avisa" ao analisador que pode ler a próxima linha
        token.category = TokenCategory::EndOfLine;
        onEndOfLine();
        return token;
    }

    // Caminha no grafo
    while (transitions[state].find(c) != transitions[state].end()) {
        state = transitions[state][c];
        column++;
        c = line[column - 1];
    }

    // Salva a categoria do token se for um estado final (Invalid caso contrário) e copia o lexema
    token.category = stateToken[state];
    token.lexeme = line.substr(token.column - 1, column - token.column);
    // Pós processamento do token, para tratar casos especiais
    if (token.category != TokenCategory::Invalid) {
        postProcess(token);
    } else {
        // Se não foi possível reconhecer um token válido então avança a coluna para evitar ‘loops’ infinitos
        column++;
    }

    return token;
}

void Scanner::onEndOfLine() {
    lineNumber++;
    column = 1;
}
