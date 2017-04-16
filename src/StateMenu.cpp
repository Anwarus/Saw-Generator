#include "StateMenu.h"

#include "Program.h"
#include "StateGenerator.h"

StateMenu::StateMenu(Program* program)
{
    this->program = program;

    init();
}

void StateMenu::init()
{
    Button button = Button(10, 10, 200, 100, "Test", sf::Color::Red);
    panel.addItem(button);
}

void StateMenu::input()
{
    sf::Event event;

    while(program->getIOSystem().pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
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
