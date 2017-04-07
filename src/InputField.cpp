#include "InputField.h"

InputField::InputField(int positionX, int positionY, int sizeX, int sizeY, sf::Color color)
{
    this->positionX = positionX;
    this->positionY = positionY;
    this->sizeX = sizeX;
    this->sizeY = sizeY;
    this->color = color;

    setRectangle();
    setText();
}

void InputField::setRectangle()
{
    rectangle.setPosition(positionX +2, positionY +2);
    rectangle.setSize(sf::Vector2f(sizeX-4,sizeY-4));
    rectangle.setFillColor(sf::Color::Black);
    rectangle.setOutlineThickness(2);
    rectangle.setOutlineColor(color);
}

void InputField::setText()
{
    setTextPosition();
    text.setCharacterSize(sizeY/1.5);
    str="";
    text.setString(str);
    text.setColor(sf::Color::White);
}

void InputField::writeIn(char unicode, int maxSize)
{
    if(str.getSize()<maxSize)
        str.insert(str.getSize(),unicode);

    updateText();
}

void InputField::writeBack()
{
    if(str.getSize()>=1)
        str.erase(str.getSize()-1);

    updateText();
}

bool InputField::getActive()
{
    return isActive;
}

void InputField::setActive(bool value)
{
    isActive = value;
}

void InputField::updateText()
{
    text.setString(str);
    setTextPosition();
}
