#ifndef MATH_H
#define MATH_H

#include <SFML/Graphics.hpp>

namespace sm
{
    const float PI = 3.14159265;

    ///Return length of line
    float lengthOfLine(sf::Vector2f a, sf::Vector2f b);
    ///Return vector where x corresponds to a and y corresponds to b => y = ax + b
    sf::Vector2f getLineFrom2Points(sf::Vector2f a, sf::Vector2f b);
    ///Return float from equation a1 * a2 = -1
    float perpendicularFactor(float a);
    ///Returns center point of line
    sf::Vector2f centerOfLine(sf::Vector2f a, sf::Vector2f b);

    float degreesToRadians(float degrees);
    float radiansToDegrees(float radians);
}

#endif // MATH_H
