#include "rond.h"

Rond::Rond()
{
}

Rond::Rond(int x, int y, std::string couleur, int rayon)
    :FigureSimple(x,y,couleur),_rayon{rayon}
{

}
