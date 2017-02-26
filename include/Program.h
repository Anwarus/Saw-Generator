#ifndef PROGRAM_H
#define PROGRAM_H

#include <SFML/Graphics.hpp>
#include "StateManager.h"
#include "Settings.h"

class Program
{
    public:
        Program();

        void loop();

        sf::RenderWindow& getIOSystem() { return m_iOSystem; };
        StateManager& getStateManager() { return m_stateManager; };
        Settings& getSettings() { return m_settings; };

    private:
        void init();

        //Input/Output
        sf::RenderWindow m_iOSystem;
        //Logic
        StateManager     m_stateManager;
        Settings         m_settings;
};

#endif // PROGRAM_H
