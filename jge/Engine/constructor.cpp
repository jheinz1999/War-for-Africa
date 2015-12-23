// constructor.cpp

#include <SFML/Graphics.hpp>

#include "../jge.hpp"

namespace jge {

	bool Engine::isMouseDown;
	bool Engine::isRightDown;
	sf::RenderWindow Engine::window;
	jge::StateManager Engine::stateManager;
	jge::EntityManager Engine::entityManager;
	std::map<std::string, sf::Keyboard::Key> Engine::keyCode;

	Engine::Engine() {



	}

}

