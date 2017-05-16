#ifndef EXCEPTIONUNEXPECTEDCHAR_H
#define EXCEPTIONUNEXPECTEDCHAR_H

#include <exception>

class ExceptionUnexpectedChar : public std::exception
{
private:
    unsigned int m_position;
public:
    ExceptionUnexpectedChar(unsigned int position);
    const char * what() const noexcept;
    unsigned int position() const;
};

#endif // EXCEPTIONUNEXPECTEDCHAR_H
