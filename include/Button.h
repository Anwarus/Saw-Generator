#ifndef BUTTON_H
#define BUTTON_H

#include <SFML/Graphics.hpp>

#include "Block.h"

class Button :public Block, public sf::Drawable
{
    public:
        Button(int positionX, int positionY, int sizeX, int sizeY, std::string text, sf::Color color);

        void stateOfButton(sf::RenderWindow *window);

    protected:

    private:

        bool isHover;

        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};

#endif // BUTTON_H
