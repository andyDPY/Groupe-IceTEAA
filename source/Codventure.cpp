#include <SFML/Graphics.hpp>
#include <box2d/include/box2d/box2d.h>


int main()
{
    sf::RenderWindow window(sf::VideoMode(), "CodVenture", sf::Style::Fullscreen);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        
        window.clear();
        
        window.display();
    }

    return 0;
}