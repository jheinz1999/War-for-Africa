// Game.hpp - Contains resources for game

#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <SFML/Graphics.hpp>

#include "../jge/jge.hpp"
#include "Map.hpp"

class Game {

	public:

	Game();

	static sf::RenderWindow window;
	static jge::StateManager stateManager;
	static jge::EntityManager entityManager;
	static sf::VideoMode getCurrentScreenSize();
	static bool isMouseDown;
	static bool isRightDown;
	static Map gameMap;

	void run();

	private:

	void scaleImages();

};

#endif
