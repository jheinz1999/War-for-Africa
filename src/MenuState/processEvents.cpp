// processEvents.cpp

#include <SFML/Graphics.hpp>

#include "../MenuState.hpp"
#include "../Game.hpp"

void MenuState::processEvents(sf::RenderWindow &window, sf::Event event) {

	if (event.type == sf::Event::Closed)
	window.close();

	if (event.type == sf::Event::MouseButtonPressed) {

		if (event.mouseButton.button == sf::Mouse::Left)
		Game::isMouseDown = 1;

		if (event.mouseButton.button == sf::Mouse::Right)
		Game::isRightDown = 1;

	}

	if (event.type == sf::Event::MouseButtonReleased) {

		if (event.mouseButton.button == sf::Mouse::Left)
		Game::isMouseDown = 0;

		if (event.mouseButton.button == sf::Mouse::Right)
		Game::isRightDown = 0;

	}
	
} 
