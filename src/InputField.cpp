#include "InputField.h"

InputField::InputField(int positionX, int positionY, int sizeX, int sizeY, sf::Color color)
{
    this->positionX = positionX;
    this->positionY = positionY;
    this->sizeX = sizeX;
    this->sizeY = sizeY;
    this->color = color;

    setRectanglePosition(positionX +2, positionY +2);
    setRectangleSize(sizeX -4 , sizeY -4);
    setRectangleColor(sf::Color::Black);
    setRectangleOutline(2, color);

    loadFont();
    setTextFont();
    setTextPosition();
    setTextCharacterSize();
    str="";
    setTextString();
    setTextColor(color);
}

void InputField::writeIn(char a, int maxSize)
{
    if(str.getSize()<maxSize) str.insert(str.getSize(),a);
    updateText();
}

void InputField::writeBack()
{
    if(str.getSize()>=1) str.erase(str.getSize()-1);
    updateText();
}

bool InputField::getActive()
{
    return isActive;
}

void InputField::setActive(bool x)
{
    isActive = x;
}

void InputField::updateText()
{
    setTextString();
    setTextPosition();
}

void InputField::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(rectangle);
    target.draw(text);
}
