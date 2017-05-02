#include <iostream>
#include "figure.h"
#include "dessin.h"
#include "carre.h"
#include "rond.h"
using namespace std;
int main()
{
    Dessin dessin{"Picasso"};
    Rond &rond=dessin.ajouter_rond(100,200,"rouge",5);

    auto & groupe = dessin.ajouter_figure_composee();
    groupe.ajouter_carre(300,200,"bleu",30);
    groupe.ajouter_rond(300,400,"jaune",30);

    dessin.afficher();
    return 0;
}

