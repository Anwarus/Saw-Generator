#ifndef STATE_H
#define STATE_H

class Program;

class State
{
    public:
        State();
        virtual ~State(){};

        virtual void input() = 0;
        virtual void update(float deltaTime) = 0;
        virtual void draw() = 0;

    protected:
        Program* m_program;
};

#endif // STATE_H
