// update.cpp - Logic for game

#include <iostream>

#include "../PlayingState.hpp"
#include "../Game.hpp"

void PlayingState::update() {

	if (Game::entityManager.getEntity("algeria")->getBoundingBox().contains((sf::Vector2f)sf::Mouse::getPosition())) {

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {

		Game::entityManager.getEntity("algeria")->setPosition((sf::Vector2f)sf::Mouse::getPosition());

		}

	}

	else if (Game::entityManager.getEntity("mali")->getBoundingBox().contains((sf::Vector2f)sf::Mouse::getPosition())) {

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {

		Game::entityManager.getEntity("mali")->setPosition((sf::Vector2f)sf::Mouse::getPosition());

		}

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::P)) {

	std::cout << "A: " << Game::entityManager.getEntity("algeria")->getPosition().x << ", " <<
    Game::entityManager.getEntity("algeria")->getPosition().y << "\nM: " <<
    Game::entityManager.getEntity("algeria")->getPosition().x << ", " <<
    Game::entityManager.getEntity("algeria")->getPosition().y << "\n";

	}

} 
