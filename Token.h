//
// Created by valerio on 29/08/2021.
//

#pragma once

#include "header.h"


struct Token {
    TokenCategory category;
    int line, column;
    std::string lexeme;
};


std::ostream &operator<<(std::ostream &stream, const Token &token);