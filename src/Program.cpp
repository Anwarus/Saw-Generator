#include "Program.h"

#include "StateManager.h"

Program::Program()
{
    //ctor
}

void Program::init()
{

}

void Program::loop()
{
    init();

    while(true)
    {
        m_stateManager.peekState().input();
        m_stateManager.peekState().update();
        m_stateManager.peekState().draw();
    }
}
