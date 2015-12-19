// Game.hpp - Contains resources for game

#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <SFML/System.hpp>

#include "../jge/jge.hpp"

class Game {

	public:

	static jge::EntityManager entityManager;
	static sf::RenderWindow window;
	static jge::StateManager stateManager;

	private:

};

#endif
