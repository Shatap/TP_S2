#include "Fait.h"



Fait::Fait(const std::string &sujet, const std::string &verbe, const std::string &complement)
{
    m_sujet=sujet;
    m_verbe=verbe;
    m_complement=complement;

}

std::string Fait::sujet() const
{
return m_sujet;
}

std::string Fait::verbe() const
{
return m_verbe;
}

std::string Fait::complement() const
{
    return m_complement;
}

bool Fait::satisfait(const std::string &sujet, const std::string &verbe, const std::string &complement)
{
    if((sujet == "*" || sujet==m_sujet) &&( verbe =="*"||verbe==m_verbe) && (complement=="*" || complement==m_complement))
        return true;

}

