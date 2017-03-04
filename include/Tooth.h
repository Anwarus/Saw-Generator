#ifndef TOOTH_H
#define TOOTH_H

#include <SFML/Graphics.hpp>

class Tooth : public sf::Drawable
{
    public:
        Tooth();

        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    private:
};

#endif // TOOTH_H
