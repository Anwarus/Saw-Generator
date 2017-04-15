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

StateMenu::~StateMenu()
{
    delete panel;
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

            }
        }

        if(event.type = sf::Event::TextEntered)
        {

        }
    }
}

void StateMenu::update(float deltaTime)
{

}

void StateMenu::draw()
{
    m_program->getIOSystem().draw(*panel);
}
