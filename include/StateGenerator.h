#ifndef STATEGENERATOR_H
#define STATEGENERATOR_H

#include <SFML/Graphics.hpp>

#include "State.h"

class StateGenerator : public State
{
    public:
        StateGenerator(Program* program);

        virtual void init();
        virtual void input();
        virtual void update(float deltaTime);
        virtual void draw();

    private:

};

#endif // STATEGENERATOR_H
