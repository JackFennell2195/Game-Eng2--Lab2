#include "InputHandler.h"

void InputHandler::handleInput()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
	{
		
		buttonQ_->execute();
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		buttonW_->execute();
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
	{
		buttonE_->execute();
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		buttonR_->execute();
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
	{
		buttonT_->execute();
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
	{
		buttonY_->execute();
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
	{
		buttonBackspace_->execute();
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Tab))
	{
		buttonTab_->execute();
	}
}
