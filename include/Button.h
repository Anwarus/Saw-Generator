#ifndef BUTTON_H
#define BUTTON_H

#include "Block.h"

class Button :public Block, public sf::Drawable
{
    public:
        Button(int positionX, int positionY, int sizeX, int sizeY, sf::String str, sf::Color color);

        void onHover(sf::Vector2i position);

    private:
        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};

#endif // BUTTON_H
