#ifndef INPUTFIELD_H
#define INPUTFIELD_H

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class InputField: public sf::Drawable
{
    public:
        InputField(int positionX, int positionY, int sizeX, int sizeY, string text ,sf::Color color);

        bool isClicked(sf::RenderWindow *window);

    protected:

    private:
        int m_positionX;
        int m_positionY;
        int m_sizeX;
        int m_sizeY; //this is font size too
        string m_text;
        sf::Color m_color;
        sf::Font font;

        sf::RectangleShape rect;
        sf::Text inscription;

        sf::Vector2i mousePosition;

        void setRect();
        void setInscription();

        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif // INPUTFIELD_H
