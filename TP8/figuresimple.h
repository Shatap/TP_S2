#ifndef FIGURESIMPLE_H
#define FIGURESIMPLE_H
#include "figure.h"
#include "string"
class FigureSimple:public Figure
{
private:
int _x;
int _y;
std::string _couleur;
public:
     FigureSimple();
       FigureSimple(int x,int y,std::string couleur);
};

#endif // FIGURESIMPLE_H
