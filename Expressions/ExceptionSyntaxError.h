#ifndef EXCEPTIONSYNTAXERROR_H
#define EXCEPTIONSYNTAXERROR_H

#include <exception>
#include <string>

class ExceptionSyntaxError : public std::exception
{
private:
    std::string m_message;
public:
    ExceptionSyntaxError(const std::string & message);
    std::string message() const;
};

#endif // EXCEPTIONSYNTAXERROR_H
