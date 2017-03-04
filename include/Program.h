#ifndef PROGRAM_H
#define PROGRAM_H

#include <SFML/Graphics.hpp>
#include "StateManager.h"

class Program
{
    public:
        Program();

        void loop();

        sf::RenderWindow& getIOSystem() { return m_iOSystem; };
        StateManager& getStateManager() { return m_stateManager; };

    private:
        void init();

        //Input/Output
        sf::RenderWindow m_iOSystem;
        //Logic
        StateManager     m_stateManager;
};

#endif // PROGRAM_H
