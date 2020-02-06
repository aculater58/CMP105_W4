#include "Player.h"

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Right)) 
	{ 
		x = 50;
	}
	if (input->isKeyDown(sf::Keyboard::Left)) 
	{ 
		x = -50;
	}
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		y = 50;
	}
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		y = -50;
	}
	
	
}

void Player::update(float dt)
{
	move(x*dt, y*dt);
	x = 0;
	y = 0;
}