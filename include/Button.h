#pragma once

#include <SFML/Graphics.hpp>

class Button
{
private:

	sf::RenderWindow& m_window;

	int m_posX;
	int m_posY;

	int m_width;
	int m_height;

	Button();

	sf::Vector2i m_mousePosition;

public:
	Button(sf::RenderWindow& window, int posX, int posY, int width, int height);
	bool isHover();
	void DiplayButtonForTest();
};

