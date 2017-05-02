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

    return 0;
}

