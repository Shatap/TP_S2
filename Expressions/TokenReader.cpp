    #include "TokenReader.h"

void TokenReader::setString(const std::string &string)
{
    m_buffer = string;
    m_position = 0;
    // prêt à analyser !
}

Token TokenReader::getToken()
{
    // sauter les espaces
    while (m_position < m_buffer.size()
           and isspace(m_buffer[m_position])) {
        m_position ++;
    }
    // plus rien ?
    if (m_position >= m_buffer.size()) {
        return { TokenType::END };
    }

    if (isdigit(m_buffer[m_position])) {
        return getNumber();
    } else if (isalpha(m_buffer[m_position])) {
        return getIdentifier();
    } else {
        return getSymbol();
    }
}

Token TokenReader::getNumber()
{
    Token r {TokenType::NUMBER};
    do {
        r.string += m_buffer[m_position];
        m_position++;
    } while (m_position < m_buffer.size()
             and isdigit(m_buffer[m_position]));

    // erreur si le nombre est suivi directement par une lettre
    if (m_position < m_buffer.size() and
            isalpha(m_buffer[m_position])) {
        throw ExceptionUnexpectedChar(m_position);
    }
    return r;
}

Token TokenReader::getIdentifier()
{
    Token r {TokenType::IDENTIFIER};
    do {
        r.string += m_buffer[m_position];
        m_position++;
    } while (m_position < m_buffer.size()
            and isalnum(m_buffer[m_position]));
    return r;
}

Token TokenReader::getSymbol()
{
    Token r {TokenType::SYMBOL};
    char c = m_buffer[m_position];
    if (c == '+' || c == '-') {
        r.string += c;
        m_position++;
        return r;
    }
    throw ExceptionUnexpectedChar(m_position);
}
