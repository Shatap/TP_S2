#include "erreurcandidatdejaenregistre.h"




ErreurCandidatDejaEnregistre::ErreurCandidatDejaEnregistre(const std::string nom)
:m_name{nom}
{

}

std::string ErreurCandidatDejaEnregistre::nom() const
{
return m_name;}
