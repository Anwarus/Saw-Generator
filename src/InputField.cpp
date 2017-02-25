#include "InputField.h"

InputField::InputField(int positionX, int positionY, int sizeX, int sizeY, string text ,sf::Color color)
{
    m_positionX = positionX;
    m_positionY = positionY;
    m_sizeX = sizeX;
    m_sizeY = sizeY;
    m_color = color;
    m_text = text;

    setRect();
    setInscription();
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
     target.draw(rect);
     target.draw(inscription);
}


