#include "Saw.h"

#include <math.h>

#include "SimpleMath.h"
#include "Tooth.h"

Saw::Saw()
{
    radius = 50;
    toothCount = 36;
    angleAlfa = 15;
    angleBeta = 15;

    init();
}

Saw::Saw(float radius, int toothCount, int angleAlfa, int angleBeta)
{
    this->radius = radius;
    this->toothCount = toothCount;
    this->angleAlfa = angleAlfa;
    this->angleBeta = angleBeta;

    init();
}

Saw::~Saw()
{
    delete[] teeth;
}

void Saw::init()
{
    teeth = new Tooth[toothCount];
}

void Saw::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    for(int i=0; i<toothCount; i++)
        target.draw(teeth[i]);
}

void Saw::setupTeeth(Tooth& tooth) {
    setTooth(0, tooth);
}

void Saw::setTooth(int index, Tooth& tooth) {
    teeth[index] = tooth;
}
