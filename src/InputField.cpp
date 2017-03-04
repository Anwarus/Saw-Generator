#include "InputField.h"

InputField::InputField(int positionX, int positionY, int sizeX, int sizeY, sf::Color color)
{
    m_positionX = positionX;
    m_positionY = positionY;
    m_sizeX = sizeX;
    m_sizeY = sizeY;
    m_color = color;

    setRectangle();
    m_string = "123";
    setText();
}

void InputField::writeIn()
{
    //if(m_string.size()<=3)
}

void InputField::writeBack()
{
    if(m_string.size()>=1)
        m_string.erase(m_string.size()-1);
}

void InputField::updateText()
{
    m_text.setString(m_string);
}

void InputField::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(m_rectangle);
    target.draw(m_text);
}
