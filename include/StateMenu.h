#ifndef STATEMENU_H
#define STATEMENU_H

#include <SFML/Graphics.hpp>

#include "State.h"

class StateMenu : public State
{
    public:
        StateMenu(Program* program);

        virtual void input();
        virtual void update(float deltaTime);
        virtual void draw();

    private:
};

#endif // STATEMENU_H
