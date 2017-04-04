#include "Saw.h"

#include <math.h>

#include "SimpleMath.h"
#include "Tooth.h"

Saw::Saw()
{
    radius = 50;
    toothHeight = 5;
    toothCount = 36;
    angleAlfa = 15;
    angleBeta = 15;

    init();
}

Saw::Saw(float radius, float toothHeight, int toothCount, int angleAlfa, int angleBeta)
{
    this->radius = radius;
    this->toothHeight = toothHeight;
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

    toothAngle = 360.0/toothCount;
    percentC = 80;
}

void Saw::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    for(int i=0; i<toothCount; i++)
        target.draw(teeth[i]);
}

void Saw::setupTeeth()
{
    sf::Vector2f result;

    //Set first tooth

    //Set A
    result.x = 0;
    result.y = radius - toothHeight;

    teeth[0].setA(result);

    //Set E
    sf::Transform transform;
    transform.rotate(sm::degreesToRadians(toothAngle));

    result = transform.transformPoint(result);

    teeth[0].setE(result);

    //Set C
    sf::Transform transform1;
    float rotationAngle = percentC/100.0 * toothAngle;
    transform1.rotate(sm::degreesToRadians(rotationAngle));

    result.x = 0;
    result.y = radius;

    result = transform1.transformPoint(result);

    teeth[0].setC(result);

    //Set B
    sf::Vector2f center = sf::Vector2f(0, 0);
    sf::Transform transform2;
    transform2.rotate(sm::degreesToRadians());

    //Rotate rest
    sf::Transform transform2;
    for(int i=1; i<toothCount; i++)
    {
        teeth[i].rotate(sm::degreesToRadians(i * toothAngle));
    }
}

void Saw::setupTeethPartA()
{
    sf::Vector2f result;

    //Set first tooth

    //Set A
    result.x = 0;
    result.y = radius - toothHeight;

    teeth[0].setA(result);
}

void Saw::setupTeethPartB()
{

}

void Saw::setupTeethPartC()
{

}

void Saw::setupTeethPartD()
{

}

void Saw::setupTeethPartE()
{

}
