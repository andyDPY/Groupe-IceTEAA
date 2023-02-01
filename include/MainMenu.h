#include <SFML/Graphics.hpp>
#include <iostream>

#include "Button.h"

#pragma once

class MainMenu
{
private:

	sf::RenderWindow& m_window;

	bool* m_inGame;
	int* m_levelUnlockedCount;
	int* m_chooseLevel;

	sf::Texture m_texture;
	sf::Sprite m_mainMenubg;


	Button* m_buttonOne;
	Button* m_buttonTwo;
	Button* m_buttonCredit;
	Button* m_buttonQuit;

	Button* m_buttonCreditReturn;

	bool m_creditOpen;
	

public:
	MainMenu(sf::RenderWindow& window, bool* inGame, int* levelUnlocked, int* chooseLevel);
	~MainMenu();
	void Update();
	void Display();
};

