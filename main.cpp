#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>

#include "Button.h"

using namespace std;

/////const infos////////////////
const int width = 600;
const int height = 600;
const int fps = 60;

sf::RenderWindow *window; //window here

int main()
{
    window = new sf::RenderWindow(sf::VideoMode(width,height,32), "tetris");
    window->setFramerateLimit(fps);

    Button b(225,275,150,50,"Exit",sf::Color::Red);

    while(window->isOpen())
    {
        sf::Event event;

        while(window->pollEvent(event))
        {
               if((event.type == sf::Event::Closed) ||(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                    window->close();

               if((event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left))
                    b.isClicked(window);

        }

            window->clear(sf::Color::Black);
            //draw
            window->draw(b);


            window->display();


    }
    delete window;
    return EXIT_SUCCESS;
}



