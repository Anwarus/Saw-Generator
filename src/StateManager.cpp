#include "StateManager.h"

#include "State.h"

StateManager::StateManager()
{
    //ctor
}

StateManager::~StateManager()
{
    while(!m_states.empty())
        popState();
}

void StateManager::pushState(State* state)
{
    m_states.push(state);
}

void StateManager::popState()
{
    if(m_states.empty())
        return;

    delete m_states.top();
    m_states.pop();
}

void StateManager::changeState(State* state)
{
    popState();
    pushState(state);
}

State* StateManager::peekState()
{
    if(m_states.empty())
        return nullptr;

    return m_states.top();
}
