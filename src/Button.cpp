#include "Button.h"

Button::Button(int positionX, int positionY, int sizeX, int sizeY, string text , sf::Color color)
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

void Button::setRect()
{
    rect.setSize(sf::Vector2f(m_sizeX,m_sizeY));
    rect.setPosition(m_positionX,m_positionY);
    rect.setFillColor(m_color);
}

void Button::setInscription()
{
    if(!font.loadFromFile("data/consola.ttf"))
      cout<<"Could not load font!";

    inscription.setString(m_text);
    inscription.setFont(font);
    inscription.setCharacterSize(m_sizeY/1.5);
    int inscriptionWidth = inscription.getGlobalBounds().width;
    int inscriptionHeight = inscription.getGlobalBounds().height;
    inscription.setPosition(m_positionX + m_sizeX/2 - inscriptionWidth/2,m_positionY + m_sizeY/2 - inscriptionHeight);
}


bool Button::isClicked(sf::RenderWindow *window)
{
    mousePosition = sf::Mouse::getPosition(*window);

    if(rect.getGlobalBounds().contains(mousePosition.x,mousePosition.y))
    {
        cout<<"Clicked"<<endl;
        return true;
    }

    else
    {
        cout<<mousePosition.x<<"|"<<mousePosition.y<<endl;
        return false;
    }


}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
     target.draw(rect);
     target.draw(inscription);
}
