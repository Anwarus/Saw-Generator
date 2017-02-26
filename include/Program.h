#ifndef PROGRAM_H
#define PROGRAM_H

#include <SFML/Graphics.hpp>

class StateManager;

class Program
{
    public:
        Program();

        void loop();

    private:
        void init();

        //Input/Output
        //sf::RenderWindow m_iOSystem;
        //Logic
        //StateManager     m_stateManager;
        //Settings
};

#endif // PROGRAM_H
