#include "Appli.h"

Appli::Appli():m_anneaux{{{200,200},sf::Color::Blue},{{400,180},sf::Color::Yellow},{{600,220},sf::Color::Black},{{800,180},sf::Color::Green},{{1000,200},sf::Color::Red}}
{

}



/**
 * comment dessiner les objets à l'écran ?
 */

void Appli::draw() {
    m_window.clear(sf::Color::White); // vert olive

    for(float i=0;i<m_anneaux.size();i++)
    {
        m_anneaux[i].draw_on(m_window);

    }



    m_window.display();
}

/**
 * Que faire quand une touche est appuyée ?
 */

void Appli::keyPressed(sf::Keyboard::Key code)
{
    switch (code) {
    case  sf::Keyboard::Q :
    case  sf::Keyboard::Escape :
        m_appli_running = false;
        break;

    case sf::Keyboard::Left:
        for(int i=0;i<m_anneaux.size();i++)
        m_anneaux[i].CircleShift({-50,0});
        break;
    case sf::Keyboard::Right:
        for(float i=0;i<m_anneaux.size();i++)
        m_anneaux[i].CircleShift({50,0});
        break;
    case sf::Keyboard::Up:
        for(float i=0;i<m_anneaux.size();i++)
        m_anneaux[i].CircleShift({0,-50});
        break;
    case sf::Keyboard::Down:
        for(float i=0;i<m_anneaux.size();i++)
        m_anneaux[i].CircleShift({0,50});
        break;
    default:
        // autre touche
        break;
    };
}


/**
 * bouton de la souris appuyé ?
 */

void Appli::mousePressed()
{

}

/**
 * bouton de la souris relâché ?
 */

void Appli::mouseReleased()
{

}

/**
 * souris déplacée ?
 */

void Appli::mouseMoved()
{

}

// ------------------------------------------------
// En principe, vous n'avez pas besoin de toucher
// le code ci-dessous
// ------------------------------------------------
/**
 * Appli::run()
 * ouverture de la fenêtre et boucle d'interaction
 */
void Appli::run()
{
    m_window.create(sf::VideoMode {1920,1080, 32},
                    "Olympic Games",
                    sf::Style::Close
                    );
    m_window.setFramerateLimit(20);

    m_appli_running = true;
    while (m_appli_running) {
        process_events();
        draw();
    }
}

/**
 * @brief Appli::process_events
 * Convertit les évènements en appels à keyPressed, etc.
 */
void Appli::process_events()
{
    sf::Event event;
    while (m_window.pollEvent(event)) {
        switch (event.type) {
        case sf::Event::Closed :
            m_appli_running = false;
            break;
        case  sf::Event::KeyPressed :
            keyPressed(event.key.code);
            break;
        case sf::Event::MouseButtonPressed :
            m_button = event.mouseButton.button;
            mousePressed();
            break;
        case sf::Event::MouseButtonReleased :
            m_button = event.mouseButton.button;
            mouseReleased();
            break;
        case sf::Event::MouseMoved :
            // conversion de coordonnées
            // important si la fenetre est redimensionnée....

            m_mouse = m_window.mapPixelToCoords( {event.mouseMove.x,
                                                  event.mouseMove.y });
            break;

        default:
            break;
        }
    }
}
