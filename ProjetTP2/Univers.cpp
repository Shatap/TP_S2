#include "Univers.h"
#include <fstream>
#include <sstream>
#include <iostream>

#include "utilitaires.h"

Univers::Univers()
    : m_position {nullptr}
{}

Univers::~Univers() {
    // un objet Univers est _propriétaire_ des
    // Endroits, Personnages, etc.
    // dont il a demandé l'allocation.

    // Il lui incombe d'en faire la libération,
    // le moment venu.
    for (auto p : m_endroits) {
        delete p.second;
    }

}

void Univers::ajouter_endroit(const std::string &nom,
                              const std::string &description)
{
    m_endroits[nom] = new Endroit(nom, description);
}

void Univers::relier(const std::string & nom1,
                     const std::string & nom2)
{
    Endroit *e1 = m_endroits[nom1],
            *e2 = m_endroits[nom2];
    e1->ajouter_voisin(e2);
    e2->ajouter_voisin(e1);
}

void Univers::aller_a(const std::string & nom)
{
    m_position = m_endroits[nom];
}

void Univers::IncPers( std::string nom,  std::string description)
{
    m_personnage=new Personnage(nom,description);
}

Endroit* Univers::position() const
{
    return m_position;
}

void Univers::afficher()  const
{
    std::cout << "* table des endroits :" << std::endl;
    for (auto & paire : m_endroits) {
        std::cout << paire.first << " ->" << std::endl
                  << "\tnom\t= " << paire.second->nom() <<std::endl
                  << "\tdescr\t= \""
                  << paire.second->description()
                  << "\"" << std::endl
                  << "\tvoisins =";
        for (auto v : paire.second->voisins()) {
            std::cout << " "<< v->nom();
        }
        std::cout << std::endl;
    }


        std::cout << "* Position actuelle : "
                  << m_position->nom() << std::endl;
        std::cout << "Personnages : "<<m_personnage->getNom() << std::endl ;
        std::cout << "Positionnement sur la carte de type cartographiée : "<<m_personnage->getDescription() << std::endl ;



    }




void Univers::charger(const std::string & nomfichier)
{
    std::ifstream fichier {nomfichier};
    if (! fichier) {
        std::cerr << nomfichier
                  << "Erreur: fichier non trouvé"
                  << std::endl;
        return;
    }
    int num = 0;
    while (true) {
        std::string ligne;
        getline(fichier, ligne);
        num ++;
        std::istringstream l { ligne};
        std::string mot;

        l >> mot;
        if (mot == "fin") {
            break;
        };
        if (mot == "endroit") {
            std::string nom, description;
            l >> nom;
            getline(l, description);
            trim(description); // enlever espaces début/fin
            ajouter_endroit(nom, description);
            continue;
        }
        if (mot == "relier") {
            std::string s1, s2;
            l >> s1>> s2;
            relier(s1, s2);
            continue;
        }

        if (mot == "position") {
            std::string position;
            l>>position;
            getline(l,position);
            trim(position);
             m_position= m_endroits[position];


            continue;
        }


        if (mot == "personnage") {
            std::string nom,description;
            l>>nom;
            getline(l,description);
            trim(description);
            IncPers( nom, description);
            continue;
        }

        if (mot == "joueur") {
            std::string nom,description;
            l>>nom;
            getline(l,nom);
            trim(description);

            continue;
        }

        std::cerr << nomfichier << ":" << num
                  << " erreur mot '" << mot
                  << "' non reconnu"
                  << std::endl;

    }
}
