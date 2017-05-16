#ifndef EVALUATOR_H
#define EVALUATOR_H

#include "TokenReader.h"
#include "ExceptionSyntaxError.h"

class Evaluator
{
private:
    TokenReader m_reader;
    Token m_next_token;

public:
    void setString( const std::string & string);
    int eval();

private:
    // fonctions auxiliaires
    int evalExpr();
    int evalNumber();
    void getNextToken();
    int evalTerme();
    int evalExp();
};
#endif // EVALUATOR_H
