// Game.hpp - Contains resources for game

#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <SFML/Graphics.hpp>

#include "../jge/jge.hpp"
#include "Map.hpp"

class Game {

	public:

	Game();

	sf::RenderWindow window;
	jge::StateManager stateManager;
	jge::EntityManager entityManager;
	sf::VideoMode getCurrentScreenSize();
	static bool isMouseDown;
	static bool isRightDown;
	static Map gameMap;

	void run();

	private:

};

#endif
