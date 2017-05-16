#ifndef TOKENREADER_H
#define TOKENREADER_H

#include <string>
#include "Token.h"

#include "ExceptionUnexpectedChar.h"

class TokenReader
{
private:
    std::string m_buffer;
    unsigned int m_position; // indice du prochain caractère à traiter

public:
    void setString( const std::string & string);
    Token getToken();

private:
    Token getNumber();
    Token getIdentifier();
    Token getSymbol();
};

#endif // TOKENREADER_H
