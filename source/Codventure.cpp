#include <SFML/Graphics.hpp>
#include <box2d/include/box2d/box2d.h>

#include "MainMenu.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(), "CodVenture", sf::Style::Fullscreen);

    bool inGame = false;
    int levelUnlockedCount = 1;
    int chooseLevel = -1;

    MainMenu mainMenu(window, &inGame, &levelUnlockedCount, &chooseLevel);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        mainMenu.Update();

        
        window.clear();

        mainMenu.Display();
        
        window.display();
    }

    return 0;
}