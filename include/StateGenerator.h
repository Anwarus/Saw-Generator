#ifndef STATEGENERATOR_H
#define STATEGENERATOR_H

#include <SFML/Graphics.hpp>

#include "State.h"

class Saw;

class StateGenerator : public State
{
    public:
        StateGenerator(Program* program);
        ~StateGenerator();

        virtual void init();
        virtual void input();
        virtual void update(float deltaTime);
        virtual void draw();

    private:
        Saw* saw;

};

#endif // STATEGENERATOR_H
