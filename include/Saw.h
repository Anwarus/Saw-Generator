#ifndef SAW_H
#define SAW_H

#include <SFML/Graphics.hpp>

class Saw : public sf::Drawable
{
    public:
        Saw();

        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    protected:

    private:
};

#endif // SAW_H
