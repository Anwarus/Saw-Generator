#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include <stack>

class State;

class StateManager
{
    public:
        StateManager();
        ~StateManager();

        void  pushState(State* state);
        void  popState();
        void  changeState(State* state);
        State* peekState();

    protected:

    private:
        std::stack<State*> m_states;
};

#endif // STATEMANAGER_H
