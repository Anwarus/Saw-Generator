#ifndef INPUTFIELD_H
#define INPUTFIELD_H

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class InputField: public sf::Drawable
{
    public:
        InputField(int positionX, int positionY, int sizeX, int sizeY, sf::Color color);

        void writeIn();
        void onClick(sf::RenderWindow *window);
        sf::Text text;
        sf::String strString;

    protected:

    private:
        int m_positionX;
        int m_positionY;
        int m_sizeX;
        int m_sizeY; //this is font size too
        sf::Color m_color;
        sf::Font font;

        bool isClicked;

        sf::RectangleShape rect;

        sf::Vector2i mousePosition;

        void setRect();

        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif // INPUTFIELD_H
