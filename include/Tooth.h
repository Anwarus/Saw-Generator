#ifndef TOOTH_H
#define TOOTH_H

#include <SFML/Graphics.hpp>

class Tooth : public sf::Drawable
{
    public:
        Tooth();
        ~Tooth();

        void init();
        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    private:
       sf::VertexArray* points;
};

#endif // TOOTH_H
