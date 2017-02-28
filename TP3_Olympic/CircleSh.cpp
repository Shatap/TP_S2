#include "CircleSh.h"


Circlesh::Circlesh()
{

}

Circlesh::Circlesh(sf::Vector2f position, sf::Color color)
{
    m_circle.setOutlineColor(color);
    m_circle.setPosition(position);
    m_circle.setRadius(100);
    m_circle.setOutlineThickness(7);
    m_circle.setFillColor(sf::Color::White);
}

int Circlesh::CircleShift(sf::Vector2f shift)
{
    m_circle.move(shift);
}

void Circlesh::draw_on(sf::RenderWindow &window)
{
    window.draw(m_circle);

}
