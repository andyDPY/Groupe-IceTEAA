#include "Button.h"

Button::Button(sf::RenderWindow& window, int posX, int posY, int width, int height) :
    m_posX(posX),
    m_posY(posY),
    m_width(width),
    m_height(height),
    m_window(window)
{
}

bool Button::isHover()
{

    m_mousePosition = sf::Mouse::getPosition(m_window);

    if (m_mousePosition.x >= m_posX && m_mousePosition.y >= m_posY && m_mousePosition.x <= m_posX + m_width && m_mousePosition.y <= m_posY)
        return true;
    else
        return false;

}

void Button::DiplayButtonForTest()
{

}