#include "Endroit.h"

Endroit::Endroit(const std::string &nom,
                 const std::string &description)
    : m_nom { nom }
    , m_description { description }
{}

std::string Endroit::nom()         const
{
    return m_nom;
}

std::string Endroit::description() const
{
    return m_description;
}

std::set<Endroit *> Endroit::voisins() const
{
    return m_voisins;
}

void Endroit::ajouter_voisin(Endroit *voisin)
{
    m_voisins.insert(voisin);
}
