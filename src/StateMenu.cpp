#include "StateMenu.h"

#include <iostream>

#include "Program.h"

StateMenu::StateMenu(Program* program)
{
    program = program;
}

void StateMenu::init()
{

}

void StateMenu::input()
{
    sf::Event event;
    while(program->getIOSystem().pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
            program->getIOSystem().close();
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
