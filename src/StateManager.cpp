#include "StateManager.h"

#include "State.h"

StateManager::StateManager()
{
    //ctor
}

StateManager::~StateManager()
{
    while(!states.empty())
        popState();
}

void StateManager::pushState(State* state)
{
    states.push(state);
}

void StateManager::popState()
{
    if(states.empty())
        return;

    delete states.top();
    states.pop();
}

void StateManager::changeState(State* state)
{
    popState();
    pushState(state);
}

State* StateManager::peekState()
{
    if(states.empty())
        return nullptr;

    return states.top();
}
