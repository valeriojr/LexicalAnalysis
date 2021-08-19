#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cstring>

#include "header.h"


struct Token {
    TokenCategory category;
    std::string lexeme;
    int line, column;
};


std::ostream &operator<<(std::ostream &stream, const Token &token) {
    printf("              [%04d, %04d] (%04d, %20s) {%s}", token.line, token.column, token.category,
           TokenCategoryNames[token.category], token.lexeme.c_str());
/*
    std::cout << "              ";
    std::cout << "[" << token.line << ", " << token.column << "]";
    std::cout << ' ';
    std::cout << "(" << (int) token.category << ", " << token.category << ")";
    std::cout << "{" << token.lexeme << "}";
*/
    return stream;
}


void postProcessToken(Token &token) {
    if (token.category == TokenCategory::Identifier) {
        if (keywords.find(token.lexeme) != keywords.end()) {
            token.category = (TokenCategory) keywords[token.lexeme];
        }
    }
}


class Scanner {
private:
    int lineNumber;
    int column{};
    std::string line;
    std::ifstream &input;

    bool bufferLine();

public:
    explicit Scanner(std::ifstream &input) : input(input) {
        lineNumber = 0;
        column = 1;
    }

    Token getNextToken();
};


int main() {
    std::ifstream source("main.txt");
    if (source.is_open()) {
        Scanner scanner(source);

        std::vector<Token> tokens;
        Token token = scanner.getNextToken();
        while(!source.eof()) {
            std::cout << token << std::endl;

            tokens.push_back(token);
            token = scanner.getNextToken();
        }
    }
    else {
        std::cout << strerror(errno);
    }

    return 0;
}


Token Scanner::getNextToken() {
    int state = 0;
    Token token;

    if (column >= line.size() && !bufferLine() && line.empty()) {
        token.category = TokenCategory::Invalid; // EOF
        return token;
    }

    while (column < line.size() && std::isspace(line[column]))
        column++;

    token.line = lineNumber;
    token.column = column;
    while (transitions[state].find(line[column]) != transitions[state].end()) {
        state = transitions[state][line[column]];
        column++;

        if(column >= line.size())
            break;
    }

    token.category = stateToken[state];
    if (token.category != TokenCategory::Invalid) {
        token.lexeme = line.substr(token.column, column - token.column);
        postProcessToken(token);
    }

    return token;
}


bool Scanner::bufferLine() {
    std::getline(input, line);
    lineNumber++;
    column = 0;

    std::cout << "`" << line << "`" << std::endl;

    return !input.eof();
}