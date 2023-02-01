#pragma once

#include <SFML/Graphics.hpp>

class Button
{
private:

	sf::RenderWindow& m_window;

	int m_posX;
	int m_posY;

	float m_width;
	float m_height;

	Button();

	sf::Vector2i m_mousePosition;

	bool m_enabled;

public:
	Button(sf::RenderWindow& window, int posX, int posY, float width, float height);
	~Button();
	bool isHover();
	void DiplayButtonForTest();
	void EnableButton();
	void DisableButton();
};

