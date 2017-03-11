#include "SimpleMath.h"

#include <math.h>

namespace Math
{
    float lengthOfLine(sf::Vector2f a, sf::Vector2f b)
    {
       return sqrt(pow(abs(b.x - a.x), 2) + pow(abs(b.y - a.y), 2));
    }

    sf::Vector2f getLineFrom2Points(sf::Vector2f a, sf::Vector2f b)
    {
        float aFactor = (b.y - a.y)/(b.x - a.x);
        float bFactor = a.y - aFactor * a.x;

        return sf::Vector2f(aFactor, bFactor);
    }

    float perpendicularFactor(float a)
    {
        return -1.0/a;
    }

    sf::Vector2f centerOfLine(sf::Vector2f a, sf::Vector2f b)
    {
        return sf::Vector2f((a.x + b.x)/2.0, (a.y + b.y)/2.0);
    }
}
