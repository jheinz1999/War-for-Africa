// run.cpp - runs game

#include <SFML/Graphics.hpp>
#include <iostream>

#include "../Game.hpp"

#include "../../jge/Entity.hpp"
#include "../../jge/StateManager.hpp"
#include "../../jge/IState.hpp"
#include "../../jge/EntityManager.hpp"
#include "../MapPiece.hpp"
#include "../PlayingState.hpp"
#include "../Map.hpp"

void Game::run() {

sf::Event event;

window.create(getCurrentScreenSize(), "War for Africa", sf::Style::Fullscreen);

window.setVerticalSyncEnabled(1);

sf::Sprite bg;
sf::Texture t;

t.loadFromFile("Graphics/map.png");
bg.setTexture(t);
float height = Game::getCurrentScreenSize().height / bg.getGlobalBounds().height;
float width = Game::getCurrentScreenSize().width / bg.getGlobalBounds().width;
bg.setOrigin(bg.getGlobalBounds().width / 2, bg.getGlobalBounds().height / 2);
bg.setPosition(Game::getCurrentScreenSize().width / 2, Game::getCurrentScreenSize().height / 2);

	if (width < height) {

	bg.setScale(width, width);
	gameMap.getMapPiece("algeria")->scale(width, width);
	gameMap.getMapPiece("mali")->scale(width, width);

	}

	if (height < width) {

	bg.setScale(height, height);
	gameMap.getMapPiece("algeria")->scale(height, height);
	gameMap.getMapPiece("mali")->scale(height, height);

	}

	while (Game::window.isOpen()) {

		while (Game::window.pollEvent(event)) {

			Game::stateManager.getCurrentState()->processEvents(Game::window, event);

		}

	window.clear();
	window.draw(bg);
	stateManager.getCurrentState()->update();
	stateManager.getCurrentState()->draw(Game::window);
	window.display();

	}

}
