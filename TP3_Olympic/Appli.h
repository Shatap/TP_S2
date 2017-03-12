#ifndef APPLI_H
#define APPLI_H

#include <SFML/Graphics.hpp>
#include "CircleSh.h"
#include "cadrillage.h"
#include <vector>
#include <iostream>

class Appli
{
public:
    Appli();
    Appli(Circlesh anneau);
    void run();

private:
    sf::RenderWindow m_window;
    bool             m_appli_running;
    Circlesh m_anneau;
    Cadrillage _cadri;
    std::vector<Circlesh> m_anneaux;
    sf::Vector2f m_mouse;          // position de la souris
    sf::Mouse::Button m_button;    // numéro bouton appuyé/relâché
    
    void process_events();

    // fonctions à compléter
    
    void draw();

    void keyPressed(sf::Keyboard::Key code);
    void mousePressed();
    void mouseReleased();
    void mouseMoved();
};

#endif // APPLI_H
