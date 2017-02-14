#include <iostream>

using namespace std;

#include "Univers.h"

void test1()
{
    std::cout << "*test1" << endl;
    Univers u;

    u.ajouter_endroit("senat", "Le Sénat");
    u.ajouter_endroit("chateau",  "Château Du Manoir");
    u.ajouter_endroit("piscine", "Piscine des Canards");
    u.relier("chateau", "senat");
    u.relier("chateau", "piscine");
    u.aller_a("chateau");

    Endroit *e = u.position();
    std::cout << "On est a "
              << e->nom()
              << " : "
              << e->description()
              << std::endl;
    std::cout << "A côté : " << std::endl;
    for (auto v : e->voisins()) {
        std::cout << "- " << v->nom()
                  << " : "
                  << v->description()
                  << std::endl;
    }
}

void test2()
{
    std::cout << "* Test2" << std::endl;
    Univers u;
    // pour tester, copiez le fichier dans /tmp
    u.charger("/tmp/jeu.txt");
    u.afficher();
}

void jeu() {
    /*
    charger un fichier
    boucle :
        afficher la position actuelle (nom et description)
        afficher la liste des voisins
        demander un nom de voisin
        si c'est /stop, arreter
        si c'est un nom de voisin, se déplacer
*/



    std::cout << "~~DEBUT DU JEU~~" << std::endl;
    Univers u;
    bool demande =true;
    string salle;

    // pour tester, copiez le fichier dans /tmp
    u.charger("/tmp/jeu.txt");
    u.afficher();


    while(demande==true)
    {
        cout <<"veuillez choisir où vous déplacer" << endl;
        cin >> salle;


        if(salle=="/stop")
            demande =false;
    }
}


int main()
{
    jeu();
    return 0;
}

