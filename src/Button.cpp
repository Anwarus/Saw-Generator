#include "Button.h"

Button::Button(int positionX, int positionY, int sizeX, int sizeY, std::string text, sf::Color color)
{
    m_positionX = positionX;
    m_positionY = positionY;
    m_sizeX = sizeX;
    m_sizeY = sizeY;
    m_color = color;
    m_string = text;

    setRectangle();
    setText();
}

void Button::stateOfButton(sf::RenderWindow *window)
{
    m_mousePosition = sf::Mouse::getPosition(*window);

    if(m_rectangle.getGlobalBounds().contains(m_mousePosition.x,m_mousePosition.y))
        isHover = true;
    else
        isHover = false;

    if(isHover)
    {
        m_rectangle.setSize(sf::Vector2f(m_sizeX -4, m_sizeY -4));
        m_rectangle.setFillColor(sf::Color::Black);
        m_rectangle.setOutlineThickness(2);
        m_rectangle.setOutlineColor(m_color);

        m_text.setColor(m_color);
    }else
    {
        m_rectangle.setSize(sf::Vector2f(m_sizeX, m_sizeY ));
        m_rectangle.setFillColor(m_color);

        m_text.setColor(sf::Color::Black);
    }

}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
     target.draw(m_rectangle);
     target.draw(m_text);
}
