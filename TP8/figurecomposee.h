#ifndef FIGURECOMPOSEE_H
#define FIGURECOMPOSEE_H
#include "figure.h"
#include "rond.h"
#include "carre.h"
#include "figurecomposee.h"
#include "vector"
class FigureComposee:public Figure
{
private:
    std::vector<Figure*>_elements;
public:
    FigureComposee();
    Rond &ajouter_rond(int x,int y,std::string couleur,int cote);
    Carre &ajouter_carre(int x,int y,std::string couleur,int rayon);
    FigureComposee & ajouter_figure_composee();

};

#endif // FIGURECOMPOSEE_H
