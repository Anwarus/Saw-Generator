#include "Saw.h"

#include "Tooth.h"

Saw::Saw()
{
    //ctor
}

void Saw::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    for(int i=0; i<toothCount; i++)
        target.draw(tooths[i]);
}
