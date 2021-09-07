#include <iostream>
#include <fstream>
#include <cstring>

#include "header.h"
#include "Token.h"
#include "Scanner.h"


int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "Usage: Agoravai <source file>" << std::endl;
        return 0;
    }

    std::ifstream source(argv[1]);

    if (source.is_open()) {
        Scanner scanner;

        // Lê o arquivo-fonte linha por linha
        for (std::string line; std::getline(source, line);) {
            std::cout << "`" << line << "`" << std::endl;

            /* Chama a função getNextToken do scanner passando a linha atual. Cada chamada retorna um token.
             * Quando a linha é consumida por completo retorna um token do tipo EndOfLine, que indica que é necessário
             * ler a próxima linha. A cada vez que o token EOL é emitido a linha do scanner é incrementada. Portanto,
             * para evitar erros na recuperação de erros, cada linha só pode ser passada por completo uma vez.
             * */
            Token token = scanner.getNextToken(line);
            while (token.category != TokenCategory::EndOfLine) {
                std::cout << token << std::endl;
                token = scanner.getNextToken(line);
            }
        }

    } else {
        // Exibe uma mensagem de erro caso o arquivo não possa ser aberto
        std::cout << strerror(errno) << std::endl;
    }

    return 0;
}

/*
 * Imprime na tela o token seguindo o formato exigido na especificação
 * */
std::ostream &operator<<(std::ostream &stream, const Token &token) {
    printf("              [%04d, %04d] (%04d, %20s) {%s}", token.line, token.column, token.category,
           TokenCategoryNames[token.category], token.lexeme.c_str());

    return stream;
}