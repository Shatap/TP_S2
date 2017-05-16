#include "ExceptionSyntaxError.h"

ExceptionSyntaxError::ExceptionSyntaxError(const std::string &message)
    : m_message{message}
{}

std::string ExceptionSyntaxError::message() const {
    return m_message;
}
