#include "Saw.h"

#include "Tooth.h"

Saw::Saw()
{
    tooths = new Tooth[toothCount];
}

Saw::Saw(float radius, float toothHeight, int toothCount, int angleAlfa, int angleBeta)
{
    this->radius = radius;
    this->toothHeight = toothHeight;
    this->toothCount = toothCount;
    this->angleAlfa = angleAlfa;
    this->angleBeta = angleBeta;
}

Saw::~Saw()
{
    delete[] tooths;
}

void Saw::init()
{

}

void Saw::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    for(int i=0; i<toothCount; i++)
        target.draw(tooths[i]);
}

void Saw::setupTooths()
{

}
