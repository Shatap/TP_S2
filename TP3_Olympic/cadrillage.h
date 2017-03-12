#ifndef CADRILLAGE_H
#define CADRILLAGE_H

#include "SFML/Graphics.hpp"

class Cadrillage
{

private:
    int _row ;
    int _col ;
    sf::RectangleShape _cadr;
    sf::CircleShape _robot;


public :

    Cadrillage(int row, int col);
    void draw_cad(sf::RenderWindow & window);
    void coloration(sf::RenderWindow &window);




};

#endif // CADRILLAGE_H
