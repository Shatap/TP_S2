#include "cadrillage.h"
#include "iostream"
#include <cstdlib>
using namespace std;

Cadrillage::Cadrillage(int row, int col)
{
    _row = row;
    _col = col;






}



void Cadrillage::draw_cad(sf::RenderWindow &window)
{

    sf::Color color;

    int coul=rand() % 4 +0;
    int tab[_row][_col];
    unsigned int i ;
    unsigned int j;

    int x=700;
    int y=600;
    _cadr.setOutlineColor(sf::Color::Blue);
    _cadr.setSize({60,60});
    _cadr.setOutlineThickness(2);
    _cadr.setFillColor(sf::Color::White);

    for(i=0;i<_row;i++)
    {
        for( j=0;j<_row;j++)
        {
            tab[i][j]=coul;
        }

    }



    for(i=0;i<_row;i++)
    {

        for(j=0;j<_col;j++)
        {
            window.draw(_cadr);

            _cadr.setPosition({x,y});
            x+=64;

            switch (coul) {
            case  0 :
                color=sf::Color::Green;
                _cadr.setFillColor(color);
                        break;
            case  1 :
                color=sf::Color::Red;
                _cadr.setFillColor(color);

                        break;
            case  2 :
                color=sf::Color::Yellow;
                _cadr.setFillColor(color);

                        break;
            case  3 :
                color=sf::Color::Blue;
                _cadr.setFillColor(color);

                        break;

            };


        }
        y-=64;
        std::cout << x << endl ;

        x=700;
        window.draw(_cadr);



    }
}



