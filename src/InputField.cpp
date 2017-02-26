#include "InputField.h"

InputField::InputField(int positionX, int positionY, int sizeX, int sizeY, sf::Color color)
{
    m_positionX = positionX;
    m_positionY = positionY;
    m_sizeX = sizeX;
    m_sizeY = sizeY;
    m_color = color;

    setRect();
}

void InputField::setRect()
{
    rect.setSize(sf::Vector2f(m_sizeX,m_sizeY));
    rect.setPosition(m_positionX,m_positionY);
    rect.setFillColor(sf::Color::Black);
    rect.setOutlineThickness(2);
    rect.setOutlineColor(m_color);
}

void InputField::onClick(sf::RenderWindow *window)
{
    mousePosition = sf::Mouse::getPosition(*window);
    if(rect.getGlobalBounds().contains(mousePosition.x,mousePosition.y))
        isClicked =true;
    else
        isClicked = false;
}

void InputField::writeIn()
{
    if(!font.loadFromFile("data/consola.ttf"))
        cout<<"Could not load font consola.ttf";

    if(isClicked)
    {
        text.setFont(font);
        text.setString("a");
        text.setCharacterSize(m_sizeY/1.5);
        text.setPosition(m_positionX,m_positionY);
        text.setString(strString);
    }
    //isClicked = false;

}

void InputField::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
     target.draw(rect);
     target.draw(text);
}


