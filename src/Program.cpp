#include "Program.h"

#include <memory>
#include <string>

#include "StateMenu.h"
#include "Settings.h"
#include "ParserIni.h"

void Program::init()
{
    std::unique_ptr<ParserIni> parserIni(new ParserIni("settings.ini"));

    //Load settings from ini file
    while(parserIni->setupLine())
        Settings::getInstance().setField(parserIni->getCurrentKey(), parserIni->getCurrentValue());

    iOSystem.create(sf::VideoMode(std::stoi(Settings::getInstance().getFieldValue("width")),
                                    std::stoi(Settings::getInstance().getFieldValue("height"))),
                                    "Saw Generator");

    //Load font
    font.loadFromFile(Settings::getInstance().getFieldValue("font"));

    stateManager.pushState(new StateMenu(this));
}

void Program::loop()
{
    init();

    sf::Clock clock;

    int fps = std::stoi(Settings::getInstance().getFieldValue("fps"));

    while(iOSystem.isOpen())
    {
        float deltaTime = clock.getElapsedTime().asSeconds();
        if(deltaTime >= 1.0/fps)
        {
            clock.restart();

            stateManager.peekState()->input();
            stateManager.peekState()->update(deltaTime);

            iOSystem.clear();
            stateManager.peekState()->draw();
            iOSystem.display();
        }
    }
}
