#include "Tooth.h"

Tooth::Tooth()
{
    points.resize(5);
}

Tooth::~Tooth()
{
    //delete points;
}

void Tooth::init()
{

}

void Tooth::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(points);
}

void Tooth::rotate(float radians)
{
    sf::Transform transform;
    transform.rotate(radians);

    for(int i=0; i<points.getVertexCount(); i++)
    {
        points[i].position = transform.transformPoint(points[i].position);
    }
}
