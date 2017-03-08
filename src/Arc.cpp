#include "Arc.h"

Arc::Arc()
{
    //ctor
}

Arc::Arc(sf::Vector2f origin, float radius, int startAngle, int endAngle, int accuracy)
{
	this->origin = origin;
	this->radius = radius;
	this->startAngle = startAngle;
	this->endAngle = endAngle;
	this->accuracy = accuracy;
}

void Arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	int differenceBetweenAngles = abs(endAngle - startAngle);
	int accuracyStep = differenceBetweenAngles / accuracy;

	sf::VertexArray arc = sf::VertexArray(sf::LineStrip, accuracy + 1);

	//arc[0].position = getPointOnCircle(origin, radius, startAngle);
	for (int i = 1; i < arc.getVertexCount() - 1; i++)
	{
		//arc[i].position = getPointOnCircle(origin, radius, startAngle + accuracyStep * i);
	}
	//arc[arc.getVertexCount() - 1].position = getPointOnCircle(origin, radius, endAngle);

	target.draw(arc);
}
