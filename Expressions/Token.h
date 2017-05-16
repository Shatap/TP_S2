#ifndef TOKEN_H
#define TOKEN_H

#include <string>

enum class TokenType  {
    NUMBER,         // suite de chiffres
    IDENTIFIER,     // une lettre, puis chiffres ou lettres
    SYMBOL,         // +, -, ...
    END
};

// -----------------------------------------------------------

struct Token
{
    TokenType type ;
    std::string string ;

    // constructeur avec paramètres  par défaut
    Token(TokenType t = TokenType::END,
          const std::string &s = "");
};

#endif // TOKEN_H
