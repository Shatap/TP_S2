#ifndef UNIVERS_H
#define UNIVERS_H

#include <map>

#include "Endroit.h"
#include "Personnage.h"

class Univers
{
private:
    // la table des endroits est
    // indexée par leurs noms
    std::map<std::string, Endroit *> m_endroits;

    Endroit * m_position;
    Personnage * m_personnage;


public:
    Univers();
    ~Univers();
    void ajouter_endroit(const std::string &nom,
                         const std::string &description);

    void relier(const std::string & nom1,
                const std::string & nom2);

    void aller_a(const std::string & nom);

    void IncPers(std::string nom, std::string description);
    Endroit* position() const;

    void afficher() const;  // aide mise au point

    void charger(const std::string & nomfichier);

};

#endif // UNIVERS_H
