#include "Block.h"

Block::Block()
{

}

void Block::setTextPosition()
{
    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.left + textRect.width/2, textRect.top + textRect.height/2);
    text.setPosition(positionX + sizeX/2, positionY + sizeY/2);
}

bool Block::isClicked(sf::Vector2i position)
{
      if(rectangle.getGlobalBounds().contains(position.x, position.y))
        return true;
      else
        return false;
}

void Block::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(rectangle);
    target.draw(text);
}
