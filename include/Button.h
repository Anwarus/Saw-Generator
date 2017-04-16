#ifndef BUTTON_H
#define BUTTON_H

#include "Block.h"

class Button :public Block
{
    public:
        Button(int positionX, int positionY, int sizeX, int sizeY, sf::String str, sf::Font font, sf::Color color);

        void onHover(sf::Vector2i position);

    private:
        void setRectangle();
        void setText();

};

#endif // BUTTON_H
