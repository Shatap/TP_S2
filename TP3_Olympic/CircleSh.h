#ifndef CIRCLESH_H
#define CIRCLESH_H

#include "SFML/Graphics.hpp"
class Circlesh{

private:

    sf::CircleShape m_circle;

public:
    Circlesh();
    Circlesh(sf::Vector2f,sf::Color color);
    int CircleShift(sf::Vector2f shift);
    void draw_on(sf::RenderWindow & window);


};

#endif // CIRCLESH_H
