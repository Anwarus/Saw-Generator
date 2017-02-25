#ifndef PROGRAM_H
#define PROGRAM_H

#include <SFML/Graphics.hpp>

class StateManager;

class Program
{
    public:
        Program();

        void init();
        void loop();

    protected:

    private:
        //Input/Output
        sf::RenderWindow m_iOSystem;
        //Core
        StateManager     m_stateManager;
};

#endif // PROGRAM_H
