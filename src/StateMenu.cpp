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

        if(event.type == sf::Event::MouseButtonPressed)
        {
            if(event.mouseButton.button == sf::Mouse::Left)
            {
                //check the inputField and button
            }

/*          INSERTING AND ERASING THE TEXT IN TEXTFIELDS

            if(event.type.TextEntered)
            {
                //insert a text into textField
            }
            else if(event.type.KeyPressed && event.key.code = sf::Keyboard::BackSpace)
            {
                //erase a text from textField
            }
*/
        }
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
