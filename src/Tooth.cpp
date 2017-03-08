#include "Tooth.h"

Tooth::Tooth()
{
    points = new sf::VertexArray(sf::LineStrip, 5);
}

Tooth::~Tooth()
{
    delete points;
}

void Tooth::init()
{

}

void Tooth::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(*points);
}
