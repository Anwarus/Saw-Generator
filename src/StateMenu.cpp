#include "StateMenu.h"

#include <iostream>

#include "Program.h"

StateMenu::StateMenu(Program* program)
{
    m_program = program;
}

StateMenu::~StateMenu()
{
    delete b;
    delete i;
}

void StateMenu::input()
{
    sf::Event event;
    while(m_program->getIOSystem().pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
            m_program->getIOSystem().close();

        if(event.type == sf::Event::MouseButtonReleased)
        {
            if(event.mouseButton.button == sf::Mouse::Left)
            {
                if(i->isClicked(sf::Mouse::getPosition(m_program->getIOSystem())))
                    i->setActive(true);
                else
                    i->setActive(false);
            }
        }

        if(event.type = sf::Event::TextEntered)
        {
          if(i->getActive())
          {
            if(event.text.unicode >= 48 && event.text.unicode <=57)
                i->writeIn(event.text.unicode,3);

            if(event.text.unicode == '\b')
                i->writeBack();
          }
        }
        b->onHover(sf::Mouse::getPosition(m_program->getIOSystem()));
    }
}

void StateMenu::update(float deltaTime)
{
    //std::cout<<"update\n";
}

void StateMenu::draw()
{
    //std::cout<<"draw\n";
    m_program->getIOSystem().draw(*b);
    m_program->getIOSystem().draw(*i);
}
