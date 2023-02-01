#pragma once
#include "SFML/Graphics.hpp"
#include "Button.h"
class GameManagement
{
private:
	sf::RenderWindow& m_window; 
	int* m_levelUnlockedCount;
	int* m_chooseLevel;
	bool* m_inGame;

	Button* m_button;

public:
	GameManagement(sf::RenderWindow& window, int* levelUnlockedCount,int* chooseLevel, bool* inGame);
	~GameManagement();
	void Update();
	void Draw();
};