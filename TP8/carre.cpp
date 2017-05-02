#include "carre.h"

Carre::Carre()
{
}

Carre::Carre(int x, int y, std::string couleur,int cote)
    :FigureSimple(x,y,couleur),_cote{cote}
{

}
