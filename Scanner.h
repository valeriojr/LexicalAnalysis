//
// Created by valerio on 29/08/2021.
//

#pragma once

#include <string>

#include "Token.h"


class Scanner {
private:
    int lineNumber;
    int column;


    void postProcess(Token& token);
    void ignoreWhitespaces(const std::string& line);

public:
    Scanner();
    Token getNextToken(const std::string& line);
    void onEndOfLine();
};
