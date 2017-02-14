#ifndef ENDROIT_H
#define ENDROIT_H

#include "string"
#include "set"

class Endroit
{
private:
    std::string m_nom, m_description;
    std::set<Endroit *> m_voisins;
public:
    Endroit(const std::string &nom,
            const std::string &description);

    void ajouter_voisin(Endroit *voisin);

    std::string nom()         const;
    std::string description() const;
    std::set<Endroit *> voisins() const;
};

#endif // ENDROIT_H
