#ifndef INPUTFIELD_H
#define INPUTFIELD_H

#include <iostream>
#include "Block.h"

class InputField :public Block
{
    public:
        InputField(int positionX, int positionY, int sizeX, int sizeY, sf::Font font, sf::Color color);

        void writeIn(char x, int maxSize);
        void writeBack();
        void clearStr();

        bool getActive();
        void setActive(bool value);

        std::string getString();

    private:
        void setRectangle();
        void setText();

        bool isActive;
        void updateText();

};

#endif // INPUTFIELD_H
