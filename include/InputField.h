#ifndef INPUTFIELD_H
#define INPUTFIELD_H

#include "Block.h"

class InputField :public Block, public sf::Drawable
{
    public:
        InputField(int positionX, int positionY, int sizeX, int sizeY, sf::Color color);

        void writeIn();
        void writeBack();
        void updateText();

    protected:

    private:

         void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};

#endif // INPUTFIELD_H
