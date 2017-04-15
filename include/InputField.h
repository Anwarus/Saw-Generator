#ifndef INPUTFIELD_H
#define INPUTFIELD_H

#include "Block.h"

class InputField :public Block
{
    public:
        InputField(int positionX, int positionY, int sizeX, int sizeY, sf::Color color);

        void writeIn(char x, int maxSize);
        void writeBack();

        bool getActive();
        void setActive(bool value);

    private:
        void setRectangle();
        void setText();

        bool isActive;
        void updateText();

};

#endif // INPUTFIELD_H
