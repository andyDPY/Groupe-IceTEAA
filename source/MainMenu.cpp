#include "MainMenu.h"

MainMenu::MainMenu(sf::RenderWindow& window, bool* inGame, int* levelUnlocked, int* chooseLevel) :
	m_inGame(inGame),
	m_window(window),
	m_levelUnlockedCount(levelUnlocked),
	m_creditOpen(false),
	m_chooseLevel(chooseLevel)
{
	m_texture.loadFromFile("assets/mainMenu.png");
	m_mainMenubg.setTexture(m_texture);

	m_buttonOne = new Button(m_window, 692, 318, 214.0f, 214.0f);
	m_buttonTwo = new Button(m_window, 1006, 318, 214.0f, 214.0f);
	m_buttonQuit = new Button(m_window, 755, 766, 409.0f, 110.0f);
	m_buttonCredit = new Button(m_window, 1565, 53, 320.0f, 110.0f);

	m_buttonCreditReturn = new Button(m_window, 43, 53, 320.0f, 110.0f);
	m_buttonCreditReturn->DisableButton();
}

MainMenu::~MainMenu()
{
	m_buttonOne->~Button();
	m_buttonTwo->~Button();
	m_buttonCredit->~Button();
	m_buttonQuit->~Button();

	m_buttonCreditReturn->~Button();
}

void MainMenu::Update()
{
	sf::Event event;
	//close window
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			m_window.close();
	}

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

		//if you press quit, the window closes
		if (m_buttonQuit->isHover() && sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			m_window.close();
		}

		//if you press credit, you will see the png of the credits
		if (m_buttonCredit->isHover() && sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			m_creditOpen = true;
			m_buttonCredit->DisableButton();
			m_buttonOne->DisableButton();
			m_buttonTwo->DisableButton();
			m_buttonQuit->DisableButton();
			m_buttonCreditReturn->EnableButton();
			
		}

		//In the credits page, if you press the escape or return button you will return to the main menu
		if (m_creditOpen && m_buttonCreditReturn->isHover() && sf::Mouse::isButtonPressed(sf::Mouse::Left) || m_creditOpen && sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			m_creditOpen = false;
			m_buttonCredit->EnableButton();
			m_buttonOne->EnableButton();
			m_buttonTwo->EnableButton();
			m_buttonQuit->EnableButton();

			m_buttonCreditReturn->DisableButton();
		}

		//If the credits are open, the corresponding png is displayed
		if (m_creditOpen)
		{
			m_texture.loadFromFile("assets/credit.png");
			m_mainMenubg.setTexture(m_texture);
		}

		//If you click on a level, the inGame boolean is set to true
		if (m_buttonOne->isHover() && sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			*m_chooseLevel = 1;
			*m_inGame = true;
		}
		if (m_buttonTwo->isHover() && sf::Mouse::isButtonPressed(sf::Mouse::Left) && *m_levelUnlockedCount >= 2)
		{
			*m_chooseLevel = 2;
			*m_inGame = true;
		}



	}
	//temporary
	else
	{
		m_texture.loadFromFile("assets/test.png");
		m_mainMenubg.setTexture(m_texture);
	}

	Display();
}

void MainMenu::Display()
{
	m_window.clear();
	m_window.draw(m_mainMenubg);
	m_window.display();
}
