#include "Button.h"

Button::Button(int positionX, int positionY, int sizeX, int sizeY, sf::String str, sf::Color color)
{
    this->positionX = positionX;
    this->positionY = positionY;
    this->sizeX = sizeX;
    this->sizeY = sizeY;
    this->str = str;
    this->color = color;

    setRectangle();
    loadFont();
    setText();

}

void Button::setRectangle()
{
    rectangle.setPosition(positionX,positionY);
    rectangle.setSize(sf::Vector2f(sizeX,sizeY));
    rectangle.setFillColor(color);
}

void Button::setText()
{
    text.setString(str);
    text.setCharacterSize(sizeY/1.5);
    setTextPosition();
    text.setColor(sf::Color::Black);
}

void Button::onHover(sf::Vector2i position)
{
    if(rectangle.getGlobalBounds().contains(position.x, position.y))
    {
        rectangle.setPosition(positionX+2,positionY+2);
        rectangle.setSize(sf::Vector2f(sizeX-4,sizeY-4));
        rectangle.setFillColor(sf::Color::Black);
        rectangle.setOutlineThickness(2);
        rectangle.setOutlineColor(color);
        text.setColor(color);
    }
    else
    {
        rectangle.setPosition(positionX,positionY);
        rectangle.setSize(sf::Vector2f(sizeX,sizeY));
        rectangle.setFillColor(color);
        rectangle.setOutlineThickness(0);
        rectangle.setOutlineColor(color);
        text.setColor(sf::Color::Black);
    }
}
