// run.cpp - runs game

#include <SFML/Graphics.hpp>
#include <iostream>

#include "../Engine.hpp"

namespace jge {

	void Engine::run(std::string name, sf::VideoMode res) {

	sf::Event event;

	window.create(res, name, sf::Style::Fullscreen);

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

}
