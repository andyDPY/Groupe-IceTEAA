#include "MainMenu.h"

MainMenu::MainMenu(sf::RenderWindow& window, bool* inGame, int* levelUnlocked) :
	m_inGame(inGame),
	m_window(window),
	m_levelUnlockedCount(levelUnlocked)
{
	m_texture.loadFromFile("assets/mainMenu.png");
	m_mainMenubg.setTexture(m_texture);
}

void MainMenu::Update()
{
	if (!*m_inGame)
	{
		//choice of menu according to the number of levels unlocked
		switch (*m_levelUnlockedCount)
		{
		case 1:
			m_texture.loadFromFile("assets/mainMenu.png");
			m_mainMenubg.setTexture(m_texture);
			break;
		case 2:
			m_texture.loadFromFile("assets/mainMenu2LevelUnlocked.png");
			m_mainMenubg.setTexture(m_texture);
			break;
		default:
			break;
		}




	}
}

void MainMenu::Display()
{
	m_window.draw(m_mainMenubg);
}
