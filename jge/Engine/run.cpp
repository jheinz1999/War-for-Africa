// run.cpp - runs game

#include <SFML/Graphics.hpp>
#include <iostream>

#include "../Engine.hpp"

namespace jge {

	void Engine::run(std::string name, sf::VideoMode res, bool fullscreen) {

	sf::Event event;

		if (fullscreen)
		window.create(res, name, sf::Style::Fullscreen);

		else
		window.create(res, name);

	window.setVerticalSyncEnabled(1);

	stateManager.getCurrentState()->loadResources();

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
