#include <SFML/Graphics.hpp>
#include <box2d/include/box2d/box2d.h>
#include <box2d/include/box2d/b2_body.h>
#include <box2d/include/box2d/b2_world.h>

#include <iostream>


int main()
{
    sf::RenderWindow window(sf::VideoMode(), "CodVenture", sf::Style::Fullscreen);


    //test
    sf::Texture map;
    if (!map.loadFromFile("assets/mapTest.png"))
    {
        // erreur...
        std::cerr << "error" << std::endl;
    }
    map.setSmooth(true);

    sf::Sprite sprite;
    sprite.setTexture(map);



    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        
        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;
}