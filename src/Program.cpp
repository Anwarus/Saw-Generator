#include "Program.h"

#include <memory>
#include <string>

#include "StateMenu.h"
#include "Settings.h"
#include "ParserIni.h"

Program::Program()
{

}

void Program::init()
{
    std::unique_ptr<ParserIni> parserIni(new ParserIni("settings.ini"));

    //Load settings from ini file
    while(parserIni->setupLine())
        Settings::getInstance().setField(parserIni->getCurrentKey(), parserIni->getCurrentValue());

    m_iOSystem.create(sf::VideoMode(std::stoi(Settings::getInstance().getFieldValue("width")),
                                    std::stoi(Settings::getInstance().getFieldValue("height"))),
                                    "Saw Generator");

    m_stateManager.pushState(new StateMenu(this));
}

void Program::loop()
{
    init();

    sf::Clock clock;

    int fps = std::stoi(Settings::getInstance().getFieldValue("fps"));

    while(m_iOSystem.isOpen())
    {
        float deltaTime = clock.getElapsedTime().asSeconds();
        if(deltaTime >= 1.0/fps)
        {
            clock.restart();

            m_stateManager.peekState()->input();
            m_stateManager.peekState()->update(deltaTime);

            m_iOSystem.clear();
            m_stateManager.peekState()->draw();
            m_iOSystem.display();
        }
    }
}
