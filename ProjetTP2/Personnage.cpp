#include "Personnage.h"

Personnage::Personnage(std::string &nom,
                       std::string &description):m_nom{nom},m_description{description}
{
}


std::string Personnage::getDescription()const
{
    return m_description;
}

std::string Personnage::getNom()const
{
return m_nom;
}

std::set<Endroit*> Personnage::getPositionnement()const
{

}
