#include "Button.h"

Button::Button(sf::RenderWindow& window, int posX, int posY, float width, float height) :
    m_posX(posX),
    m_posY(posY),
    m_width(width),
    m_height(height),
    m_window(window),
    m_enabled(true)
{

}

Button::~Button()
{
}

bool Button::isHover()
{

    m_mousePosition = sf::Mouse::getPosition(m_window);

    if (m_enabled)
    {
        if (m_mousePosition.x >= m_posX && m_mousePosition.y >= m_posY && m_mousePosition.x <= m_posX + m_width && m_mousePosition.y <= m_posY + m_height)
            return true;
    }
    
    return false;
}

void Button::DiplayButtonForTest()
{
    sf::RectangleShape rectangle(sf::Vector2f(m_width, m_height));
    rectangle.setOrigin(sf::Vector2f(0.0f, 0.0f));
    rectangle.setPosition(sf::Vector2f(m_posX, m_posY));

    m_window.draw(rectangle);

}

void Button::EnableButton()
{
    m_enabled = true;
}

void Button::DisableButton()
{
    m_enabled = false;
}
