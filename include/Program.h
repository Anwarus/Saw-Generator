#ifndef PROGRAM_H
#define PROGRAM_H

#include <SFML/Graphics.hpp>

class StateManager;

class Program
{
    public:
        Program();

        void loop();

    protected:

    private:
        void init();

        //Input/Output
        sf::RenderWindow m_iOSystem;
        //Logic
        StateManager     m_stateManager;
};

#endif // PROGRAM_H
