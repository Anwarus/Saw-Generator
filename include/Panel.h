#ifndef PANEL_H
#define PANEL_H

#include <SFML/Graphics.hpp>
#include <vector>

#include "Button.h"
#include "InputField.h"
#include "Label.h"

class Panel: public sf::Drawable
{
    public:
        Panel();

        void addItem(Label item);
        void addItem(InputField item);
        void addItem(Button item);
        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    private:
        std::vector <Label> labels;
        std::vector <InputField> inputFields;
        std::vector <Button> buttons;
};

#endif // PANEL_H
