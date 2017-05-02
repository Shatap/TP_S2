#ifndef CARRE_H
#define CARRE_H
#include "figuresimple.h"

class Carre : public FigureSimple
{
private:
   int _cote;
public:
    Carre();
    Carre(int x,int y,std::string couleur,int cote);
};

#endif // CARRE_H
