#include "Label.h"

Label::Label(int positionX, int positionY, int textSize, sf::String str, sf::Color color)
{
    this->positionX = positionX;
    this->positionY = positionY;
    this->str = str;
    this->color = color;

    textSize = tSize;

    setText();
}

void Label::setText()
{
    text.setColor(color);
    text.setCharacterSize(tSize);
    text.setString(str);

    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.left + textRect.width/2, textRect.top);
    text.setPosition(positionX + 50,positionY);
}
