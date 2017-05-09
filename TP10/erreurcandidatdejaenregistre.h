#ifndef ERREURCANDIDATDEJAENREGISTRE_H
#define ERREURCANDIDATDEJAENREGISTRE_H
#include "string"

class ErreurCandidatDejaEnregistre
{
private:

    std::string m_name;
public:
    ErreurCandidatDejaEnregistre(const std::string nom );
    std::string  nom() const;



};

#endif // ERREURCANDIDATDEJAENREGISTRE_H
