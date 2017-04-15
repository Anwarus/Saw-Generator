#include "StateMenu.h"

#include <iostream>

#include "Program.h"

StateMenu::StateMenu(Program* program)
{
    m_program = program;
    panel.addItem(Button(100,100,100,50,"Generate",sf::Color(0,122,204)));
}

StateMenu::~StateMenu()
{

}

void StateMenu::input()
{
    sf::Event event;

    while(m_program->getIOSystem().pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
            m_program->getIOSystem().close();

        if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
            m_program->getIOSystem().close();

        if(event.type == sf::Event::MouseButtonReleased)
        {
            if(event.mouseButton.button == sf::Mouse::Left)
            {

            }
        }

        if(event.type = sf::Event::TextEntered)
        {

        }
    }
}

void StateMenu::update(float deltaTime)
{
    //std::cout<<"update\n";
}

void StateMenu::draw()
{
    //std::cout<<"draw\n";
    m_program->getIOSystem().draw(panel);
}
