#ifndef STATEMENU_H
#define STATEMENU_H

#include <SFML/Graphics.hpp>

#include "State.h"

#include "Button.h"
#include "InputField.h"

class StateMenu : public State
{
    public:
        StateMenu(Program* program);
        ~StateMenu();

        virtual void input();
        virtual void update(float deltaTime);
        virtual void draw();

    private:
        Button* b = new Button(200,200,100,40,"OK",sf::Color::Green);
        InputField *i = new InputField(200,250,100,30,sf::Color::Red);

};

#endif // STATEMENU_H
