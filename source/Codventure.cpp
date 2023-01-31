#include <SFML/Graphics.hpp>
#include <box2d/include/box2d/box2d.h>

// a enlever
#include "MainMenu.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(), "CodVenture", sf::Style::Fullscreen);

    /* A ajouter dans le main



    */
    bool inGame = false;
    int levelUnlockedCount = 1;

    //a enlever
    
    MainMenu mainMenu(window, &inGame, &levelUnlockedCount);
    //

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //à enlever
        mainMenu.Update();

        
        window.clear();

        mainMenu.Display();
        
        window.display();
    }

    return 0;
}