#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	//*new*
	playerone.setInput(input);
	playerone.setTexture(&texture);
	playerone.setSize(sf::Vector2f(100, 100));
	playerone.setPosition(150, 150);
	
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	//*new*
	playerone.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	//*new*
	playerone.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	//*new*
	window->draw(playerone);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}