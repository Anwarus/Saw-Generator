#ifndef LABEL_H
#define LABEL_H

#include "Block.h"

class Label: public Block
{
    public:
        Label(int positionX, int positionY, int textSize, sf::String str, sf::Font font, sf::Color color);

    private:
        int tSize;
        void setText();
};

#endif // LABEL_H
