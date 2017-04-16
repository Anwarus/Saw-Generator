#ifndef PROGRAM_H
#define PROGRAM_H

#include <SFML/Graphics.hpp>
#include "StateManager.h"

class Program
{
    public:
        Program() {}

        void loop();

        sf::RenderWindow& getIOSystem() { return iOSystem; };
        StateManager& getStateManager() { return stateManager; };

        void getFont() { return font; };

    private:
        void init();

        //Input/Output
        sf::RenderWindow iOSystem;
        //Logic
        StateManager     stateManager;

        //Font
        sf::Font font;
};

#endif // PROGRAM_H
