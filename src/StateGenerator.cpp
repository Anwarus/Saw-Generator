#include "StateGenerator.h"

#include <iostream>

#include "Program.h"
#include "Saw.h"

StateGenerator::StateGenerator(Program* program)
{
    this->program = program;

    saw = new Saw();
}

StateGenerator::~StateGenerator()
{
    delete saw;
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
    std::cout<<"update generator\n";
}

void StateGenerator::draw()
{
    std::cout<<"draw generator\n";
}
