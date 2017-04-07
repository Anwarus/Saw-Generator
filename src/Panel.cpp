#include "Panel.h"

Panel::Panel()
{

}

Panel::~Panel()
{

}

void Panel::addItem(Label& item)
{
    labels.push_back(item);
}

void Panel::addItem(InputField& item)
{
    inputFields.push_back(item);
}

void Panel::addItem(Button& item)
{
    buttons.push_back(item);
}

void Panel::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
   for(int i=0; i<labels.size(); i++)
      target.draw(labels[i]);

   for(int i=0; i<inputFields.size(); i++)
      target.draw(inputFields[i]);

   for(int i=0; i<buttons.size(); i++)
      target.draw(buttons[i]);

}

