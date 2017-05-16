#include "ExceptionUnexpectedChar.h"


ExceptionUnexpectedChar::ExceptionUnexpectedChar(unsigned int position)
    : m_position {position}
{}

const char *ExceptionUnexpectedChar::what() const noexcept
{
    return "ExceptionUnexpectedChar";
}

unsigned int ExceptionUnexpectedChar::position() const
{
    return m_position;
}
