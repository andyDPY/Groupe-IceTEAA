#pragma once
#include "SFML/Graphics.hpp"
class GameManagement
{
private:
	sf::RenderWindow& m_window; 
	int* m_levelUnlockedCount;
	int* m_chooseLevel;
	bool* m_inGame;

public:
	GameManagement(sf::RenderWindow& window, int* levelUnlockedCount,int* chooseLevel, bool* inGame);
	void Update();
	void Draw();
};