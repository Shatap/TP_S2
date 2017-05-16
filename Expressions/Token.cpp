#include "Token.h"

Token::Token(TokenType t, const std::string &s)
    : type {t}
    , string {s}
{
}
