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

	sf::View view;

	view.setSize(getNativeResolution());
	view.setViewport(sf::FloatRect(0, 0, 1, 1));
	view.setCenter(getNativeResolution().x / 2, getNativeResolution().y / 2);

	window.setView(view);

	window.setFramerateLimit(60);

	stateManager.getCurrentState()->loadResources();

		while (window.isOpen()) {

		isMouseClicked = 0;
		isRightClicked = 0;
		isMouseDown = 0;
		isRightDown = 0;
		
			while (window.pollEvent(event)) {

				stateManager.getCurrentState()->processEvents(window, event);
				gui.handleEvent(event);

			}

		window.setView(view);

		window.clear();
		stateManager.getCurrentState()->update();
		stateManager.getCurrentState()->draw(window);
		gui.draw();
		window.display();

		}

	}

}
