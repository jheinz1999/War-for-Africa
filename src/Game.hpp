// Game.hpp - Contains resources for game

#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <SFML/Graphics.hpp>

#include "../jge/jge.hpp"
#include "Map.hpp"

class Game : public jge::Engine { // Main game class, is used on top of generic Engine

	public:

	Game();

	static Map gameMap; // Data structure containing all map-related entities

	static void scaleImages(); // Static function that scales all entities

	private:

};

#endif
