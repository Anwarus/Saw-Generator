#ifndef BLOCK_H
#define BLOCK_H

#include <SFML/Graphics.hpp>
#include <iostream>

class Block
{
    public:
        Block();
        bool isClicked(sf::Vector2i position);

    protected:

        int positionX;
        int positionY;
        int sizeX;
        int sizeY;
        sf::Color color;
        sf::Font font;
        sf::String str;

        sf::Text text;
        sf::RectangleShape rectangle;

        void setRectanglePosition(int x, int y);
        void setRectangleSize(int x, int y );
        void setRectangleColor(sf::Color c);
        void setRectangleOutline(int x, sf::Color c);

        void loadFont();
        void setTextString();
        void setTextColor(sf::Color c);
        void setTextFont();
        void setTextCharacterSize();
        void setTextPosition();
};

#endif // BLOCK_H
