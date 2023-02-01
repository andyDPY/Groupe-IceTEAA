#include "GameManagement.h"

GameManagement::GameManagement(sf::RenderWindow& window, int* levelUnlockedCount,int* chooseLevel, bool* inGame)
	: m_window(window), m_levelUnlockedCount(levelUnlockedCount),m_chooseLevel(chooseLevel), m_inGame(inGame)
{
	m_button = new Button(m_window, 100, 100, 50.0f, 50.0f);
}

GameManagement::~GameManagement()
{
	delete m_button;

}

void GameManagement::Update()
{
	sf::Event event;
	//close window
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			m_window.close();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		*m_inGame = false;
	}

	Draw();
}

void GameManagement::Draw()
{
	m_window.clear();
	m_button->DiplayButtonForTest();
	m_window.display();
}
