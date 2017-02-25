#ifndef STATE_H
#define STATE_H


class State
{
    public:
        State();

        virtual void input() = 0;
        virtual void update() = 0;
        virtual void draw() = 0;

    protected:

    private:
        Program* m_program;
};

#endif // STATE_H
