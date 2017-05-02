#ifndef DESSIN_H
#define DESSIN_H
#include "figurecomposee.h"
class Dessin:public FigureComposee
{
private:
    std::string _auteur;
public:
    Dessin();
    Dessin(std::string auteur);
};

#endif // DESSIN_H
