#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include <vector>

class State;

class StateManager
{
    public:
        StateManager();

        void  pushState(State state);
        void  popState();
        void  changeState(State state);
        State peekState();

    protected:

    private:
        std::vector<State> m_states;
};

#endif // STATEMANAGER_H
