#pragma once

#include <iostream>

// ROUGH

enum TokenType {
    FIXNUM
};

struct Token {
    TokenType type;
    std::string value;
};

class Tokenizer {};