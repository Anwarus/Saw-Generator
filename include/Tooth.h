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
        void rotate(float radians);

        void setA(sf::Vector2f position) { points[0].position = position; };
        void setB(sf::Vector2f position) { points[1].position = position; };
        void setC(sf::Vector2f position) { points[2].position = position; };
        void setD(sf::Vector2f position) { points[3].position = position; };
        void setE(sf::Vector2f position) { points[4].position = position; };

    private:
       sf::VertexArray points;
};

#endif // TOOTH_H
