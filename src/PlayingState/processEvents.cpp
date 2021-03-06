// processEvents.cpp

#include <SFML/Graphics.hpp>
#include <iostream>

#include "../PlayingState.hpp"
#include "../Game.hpp"

void PlayingState::processEvents(sf::RenderWindow &window, sf::Event event) {

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
		Game::isMouseClicked = 1;

		if (event.mouseButton.button == sf::Mouse::Right)
		Game::isRightClicked = 1;

	}
	
} 
