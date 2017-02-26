#include "StateMenu.h"

#include <iostream>

#include "Program.h"

StateMenu::StateMenu(Program* program)
{
    m_program = program;
}

void StateMenu::input()
{
    sf::Event event;
    while(m_program->getIOSystem().pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
            m_program->getIOSystem().close();
    }
}

void StateMenu::update(float deltaTime)
{
    std::cout<<"update\n";
}

void StateMenu::draw()
{
    std::cout<<"draw\n";
}
