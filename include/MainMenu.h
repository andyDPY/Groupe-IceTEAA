#include <SFML/Graphics.hpp>
#include <iostream>

#pragma once

class MainMenu
{
private:

	sf::RenderWindow& m_window;

	bool* m_inGame;
	int* m_levelUnlockedCount;

	sf::Texture m_texture;
	sf::Sprite m_mainMenubg;

public:
	MainMenu(sf::RenderWindow& window, bool* inGame, int* levelUnlocked);
	void Update();
	void Display();
};

