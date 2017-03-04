#include "StateGenerator.h"

#include <iostream>

#include "Program.h"

StateGenerator::StateGenerator(Program* program)
{
    program = program;
}

void StateGenerator::init()
{

}

void StateGenerator::input()
{
    sf::Event event;
    while(program->getIOSystem().pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
            program->getIOSystem().close();
    }
}

void StateGenerator::update(float deltaTime)
{
    std::cout<<"update\n";
}

void StateGenerator::draw()
{
    std::cout<<"draw\n";
}
