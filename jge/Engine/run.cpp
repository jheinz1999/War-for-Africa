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

	stateManager.getCurrentState()->loadResources();

	sf::Clock gameClock, framerateClock;

	sf::Time frameTime = sf::seconds(1.0 / logicFps);
	sf::Time updateTime = sf::Time::Zero;

	float fps;

		if (maxFramerate > 0)
		window.setFramerateLimit(maxFramerate);

		while (window.isOpen()) {

		isMouseClicked = 0;
		isRightClicked = 0;
		isMouseDown = 0;
		isRightDown = 0;

		updateTime += gameClock.restart();

		fps += 1 / framerateClock.restart().asSeconds();

		fps /= 2;

		std::cout << fps << std::endl;

			while (updateTime > frameTime) {

			updateTime -= frameTime;
		
				while (window.pollEvent(event)) {

					stateManager.getCurrentState()->processEvents(window, event);
					gui.handleEvent(event);

				}

			stateManager.getCurrentState()->update(frameTime);

			}

		window.setView(view);

		window.clear();

		stateManager.getCurrentState()->draw(window);
		gui.draw();
		window.display();

		}

	}

}
