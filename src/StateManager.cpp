#include "StateManager.h"

StateManager::StateManager()
{
    //ctor
}

void StateManager::pushState(State state)
{
    m_states.push(state);
}

void StateManager::popState()
{
    if(m_states.empty())
        return;

    m_states.pop();
}

void StateManager::changeState(State state)
{
    popState();
    pushState(state);
}

State StateManager::peekState()
{
    if(m_states.empty())
        return nullptr;

    return m_states.top();
}
