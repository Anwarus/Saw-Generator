#ifndef SAW_H
#define SAW_H

#include <SFML/Graphics.hpp>

class Tooth;

class Saw : public sf::Drawable
{
    public:
        Saw();

        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    private:
        int toothCount;
        Tooth* tooths;
};

#endif // SAW_H
