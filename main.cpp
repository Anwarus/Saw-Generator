#include <SFML/Graphics.hpp>
#include <iostream>

#include "Button.h"
#include "InputField.h"

using namespace std;

/////const infos////////////////
const int width = 600;
const int height = 600;
const int fps = 60;

sf::RenderWindow *window; //window here

sf::String userInput;
sf::Font font;

int main()
{
    window = new sf::RenderWindow(sf::VideoMode(width,height,32), "tetris");
    window->setFramerateLimit(fps);

    Button b(225,275,150,50,"Exit",sf::Color::Green);
    InputField i(225,350, 150, 30,sf::Color::Green);

    if(!font.loadFromFile("data/consola.ttf"))
      cout<<"Could not load font!";

    sf::Text text("",font,50);


    while(window->isOpen())
    {
        sf::Event event;

        while(window->pollEvent(event))
        {
               if((event.type == sf::Event::Closed) ||(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                    window->close();

               if((event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left))
               {
                   //b.isClicked(window);
                   i.writeIn(window);
               }

               if(event.type == sf::Event::TextEntered && userInput.getSize()<3)
               {
                if(event.text.unicode >= 48 && event.text.unicode <=57)
                    userInput.insert(userInput.getSize(), event.text.unicode);
               }

                else if(event.type == sf::Event::KeyPressed)
                {
                  if(event.key.code == sf::Keyboard::BackSpace && userInput != "")
                    userInput.erase(userInput.getSize() - 1);
                }
        }

            window->clear(sf::Color::Black);
            //draw
            window->draw(b);
            text.setString(userInput);
            window->draw(i);
            window->draw(text);


            window->display();

    }
    delete window;
    return EXIT_SUCCESS;
}



