#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include "vector"
#include "set"
#include "Endroit.h"


class Personnage
{

private:
    std::string m_nom;
    std::string m_description;
public:
    Personnage( std::string &nom,
     std::string &description);

    std::string getNom() const;
    std::string getDescription() const;
    std::set<Endroit*>getPositionnement() const;

};

#endif // PERSONNAGE_H
