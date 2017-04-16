#ifndef STATEMENU_H
#define STATEMENU_H

#include <SFML/Graphics.hpp>

#include "State.h"
#include "Panel.h"

class StateMenu : public State
{
    public:
        StateMenu(Program* program);

        virtual void init();
        virtual void input();
        virtual void update(float deltaTime);
        virtual void draw();

    private:
        Panel panel;

};

#endif // STATEMENU_H
