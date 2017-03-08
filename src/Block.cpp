#include "Block.h"

Block::Block()
{

}

void Block::setRectanglePosition(int x, int y)
{
    rectangle.setPosition(x,y);
}

void Block::setRectangleSize(int x, int y)
{
    rectangle.setSize(sf::Vector2f(x,y));
}

void Block::setRectangleColor(sf::Color c)
{
    rectangle.setFillColor(c);
}

void Block::setRectangleOutline(int x, sf::Color c)
{
    rectangle.setOutlineThickness(x);
    rectangle.setOutlineColor(c);
}

void Block::loadFont()
{
    if(!font.loadFromFile("data/consola.ttf"))
        std::cout<<"Could not load font!";
}

void Block::setTextFont()
{
    text.setFont(font);
}

void Block::setTextString()
{
    text.setString(str);
}

void Block::setTextColor(sf::Color c)
{
    text.setColor(c);
}

void Block::setTextCharacterSize()
{
    text.setCharacterSize(sizeY/1.5);
}

void Block::setTextPosition()
{
    int textPosX = text.getGlobalBounds().width;
    int textPosY = text.getGlobalBounds().height;

    text.setPosition(positionX + sizeX/2 - textPosX/2, positionY + sizeY/2 - textPosY);
}

bool Block::isClicked(sf::Vector2i position)
{
      if(rectangle.getGlobalBounds().contains(position.x, position.y))
        return true;
      else
        return false;
}
