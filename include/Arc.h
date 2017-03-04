#ifndef ARC_H
#define ARC_H

#include <SFML/Graphics.hpp>

class Arc : public sf::Drawable
{
private:
	sf::Vector2f origin;
	float radius;
	int startAngle;
	int endAngle;
	int accuracy;

public:

	Arc() {};
	Arc(sf::Vector2f origin, float radius, int startAngle, int endAngle, int accuracy);

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif // ARC_H
