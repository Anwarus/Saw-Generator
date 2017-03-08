#include "Button.h"

Button::Button(int positionX, int positionY, int sizeX, int sizeY, sf::String str, sf::Color color)
{
    this->positionX = positionX;
    this->positionY = positionY;
    this->sizeX = sizeX;
    this->sizeY = sizeY;
    this->str = str;
    this->color = color;

    setRectanglePosition(positionX, positionY);
    setRectangleSize(sizeX, sizeY);
    setRectangleColor(color);

    loadFont();
    setTextFont();
    setTextString();
    setTextCharacterSize();
    setTextPosition();
    setTextColor(sf::Color::Black);
}

void Button::onHover(sf::Vector2i position)
{
    if(rectangle.getGlobalBounds().contains(position.x, position.y))
    {
        setRectanglePosition(positionX +2, positionY +2);
        setRectangleSize(sizeX -4,sizeY -4);
        setRectangleColor(sf::Color::Black);
        setRectangleOutline(2,color);
        setTextColor(color);
    }
    else
    {
        setRectanglePosition(positionX, positionY);
        setRectangleSize(sizeX,sizeY);
        setRectangleOutline(0, color);
        setRectangleColor(color);
        setTextColor(sf::Color::Black);
    }
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
     target.draw(rectangle);
     target.draw(text);
}
