#include "StateMenu.h"

#include "Program.h"
#include "StateGenerator.h"

StateMenu::StateMenu(Program* program)
{
    this->program = program;
    //panel.addItem(Button(100,100,100,50,"Generate",sf::Color(0,122,204)));
    init();
}

void StateMenu::init()
{
    panel.addItem(Button(100,100,100,50,"Generate",sf::Color(0,122,204)));
}

void StateMenu::input()
{
    sf::Event event;

    while(program->getIOSystem().pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
            program->getIOSystem().close();

        if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
            program->getIOSystem().close();

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
    program->getIOSystem().draw(panel);
}
