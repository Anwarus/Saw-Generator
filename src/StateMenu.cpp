#include "StateMenu.h"

#include "Program.h"
#include "StateGenerator.h"

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
        if(event.type == sf::Event::KeyReleased)
        {
            if(event.key.code == sf::Keyboard::Return)
                program->getStateManager().changeState(new StateGenerator(program));
        }
    }
}

void StateMenu::update(float deltaTime)
{

}

void StateMenu::draw()
{

}
