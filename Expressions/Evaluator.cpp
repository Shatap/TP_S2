#include "Evaluator.h"

#include "ExceptionSyntaxError.h"

void Evaluator::setString(const std::string &string) {
    m_reader.setString(string);
}

void Evaluator::getNextToken()
{
    m_next_token = m_reader.getToken();
}



int Evaluator::eval()
{
    getNextToken();                // pour démarrer, lecture d'un premier élément
    int n = evalExpr();
    if (m_next_token.type !=  TokenType::END)
    {
        throw ExceptionSyntaxError("fin de ligne attendue");
    }
    return n;
}

int Evaluator::evalExpr()
{
    int value = evalNumber();
    while (m_next_token.type == TokenType::SYMBOL
           && (m_next_token.string == "+" ||
               m_next_token.string == "-" )) {
            auto operation = m_next_token.string; // on note l'operation
         getNextToken(); // on avance
         int n = evalNumber();
         if (operation == "+") {
             value = value + n;
         } else {
             // operation == '-'
             value = value - n;
         }
    }
    return value;
}

int Evaluator::evalNumber()
{
    if (m_next_token.type != TokenType::NUMBER) {
        throw ExceptionSyntaxError("nombre attendu");
    }
    int n = std::stoi(m_next_token.string); // conversion
    getNextToken();
    return n;
}
int Evaluator::evalTerme()
{
    int value = evalNumber();
    while(m_next_token.type == TokenType::SYMBOL && (m_next_token.string == "*" || m_next_token.string=="/"))
    {
        auto op = m_next_token.string;
        getNextToken();
        int n = evalNumber();

        if(op == "*")
            value = value*n;

        else{
            value=value/n;
        }

    }
    return value;
}

int Evaluator::evalExp()
{
    int value = evalTerme();

}
