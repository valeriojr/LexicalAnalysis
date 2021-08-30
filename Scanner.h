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


    static void postProcess(Token& token);

public:
    Scanner();

    Token getNextToken(const std::string& line);
};
