#include "Program.h"

#include "StateMenu.h"
#include "Settings.h"
#include "ParserIni.h"

Program::Program()
{

}

void Program::init()
{
    ParserIni parserIni = ParserIni("settings.ini");
    Settings::getInstance().setField(parserIni.getKey(), parserIni.getValue());
    parserIni.nextLine();

    m_iOSystem.create(sf::VideoMode(m_settings.width, m_settings.height), m_settings.name);
    m_stateManager.pushState(new StateMenu(this));
}

void Program::loop()
{
    init();

    sf::Clock clock;

    while(m_iOSystem.isOpen())
    {
        float deltaTime = clock.getElapsedTime().asSeconds();
        if(deltaTime >= 1.0/m_settings.fps)
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
