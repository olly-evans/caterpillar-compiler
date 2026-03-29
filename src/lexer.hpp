#pragma once

#include <iostream>

enum class TokenType {
    GLOB_RES_WORD,   // int, return, if, while, void, char etc.
    CON_RES_WORD,    // context-sensitive reserved words
    RES_SYM,         // ( ) { } ; , = + - * / etc.
    IDENTIFIER,      // user defined names e.g. scheme_entry
    STRING,          // "hello"
    INT_LITERAL,     // 42
    REAL_LITERAL,    // 3.14
};

struct Token {
    TokenType type;
    std::string value;
};

class Lexer {

    /* Break up source code into an array of tokens.*/

    private: 
        std::string input;

    public:
        Lexer(std::string Input) {
            input = Input;
        }
};