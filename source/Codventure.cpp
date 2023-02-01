#include <SFML/Graphics.hpp>
#include <box2d/include/box2d/box2d.h>
#include "GameManagement.h"
#include "MainMenu.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(), "CodVenture", sf::Style::Fullscreen);

    bool inGame = false;
    int levelUnlockedCount = 1;
    int chooseLevel = -1;

    GameManagement gameManagement(window, &levelUnlockedCount, &chooseLevel, &inGame);
    MainMenu mainMenu(window, &inGame, &levelUnlockedCount);

    while (window.isOpen())
    {
        if (!inGame)
        {
            mainMenu.Update();
        }
        else
        {
            gameManagement.Update();
        } 
    }
    return 0;
}