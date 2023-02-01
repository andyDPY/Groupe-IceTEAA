#include "GameManagement.h"

GameManagement::GameManagement(sf::RenderWindow& window, int* levelUnlockedCount,int* chooseLevel, bool* inGame)
	: m_window(window), m_levelUnlockedCount(levelUnlockedCount),m_chooseLevel(chooseLevel), m_inGame(inGame)
{
}

void GameManagement::Update()
{


	Draw();
}

void GameManagement::Draw()
{
}
