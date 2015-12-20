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

	while (window.isOpen()) {

		while (window.pollEvent(event)) {

			stateManager.getCurrentState()->processEvents(window, event);

		}

	window.clear();
	stateManager.getCurrentState()->update();
	stateManager.getCurrentState()->draw(window);
	window.display();

	}

}
