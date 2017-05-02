#ifndef ROND_H
#define ROND_H
#include "figuresimple.h"
class Rond:public FigureSimple
{
private:
    int _rayon;
public:
    Rond();
    Rond(int x,int y,std::string couleur,int rayon);
};

#endif // ROND_H
