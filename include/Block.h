#ifndef BLOCK_H
#define BLOCK_H

#include <SFML/Graphics.hpp>
#include <iostream>

class Block: public sf::Drawable
{
    public:
        Block();
        bool isClicked(sf::Vector2i position);
        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    protected:
        int positionX;
        int positionY;
        int sizeX;
        int sizeY;
        sf::Color color;

        sf::RectangleShape rectangle;

        sf::String str;
        sf::Text text;

        void setTextPosition();
};

#endif // BLOCK_H
