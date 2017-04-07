#ifndef BLOCK_H
#define BLOCK_H

#include <SFML/Graphics.hpp>
#include <iostream>

class Block: public sf::Drawable
{
    public:
        Block();
        bool isClicked(sf::Vector2i position);
        void clearStr();

    protected:
        int positionX;
        int positionY;
        int sizeX;
        int sizeY;
        sf::Color color;
        sf::String str;

        sf::Text text;
        sf::RectangleShape rectangle;

        void setTextPosition();

        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    private:
        sf::Font font;
        void loadFont();

};

#endif // BLOCK_H
