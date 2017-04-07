#ifndef STATEMENU_H
#define STATEMENU_H

#include <SFML/Graphics.hpp>

#include "State.h"
#include "Panel.h"
#include "Block.h"

class StateMenu : public State
{
    public:
        StateMenu(Program* program);
        ~StateMenu();

        virtual void input();
        virtual void update(float deltaTime);
        virtual void draw();

    private:
        Panel* panel = new Panel();

};

#endif // STATEMENU_H
