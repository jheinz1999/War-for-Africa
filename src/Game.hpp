// Game.hpp - Contains resources for game

#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <SFML/Graphics.hpp>

#include "../jge/jge.hpp"
#include "../jge/Engine.hpp"
#include "Map.hpp"

class Game : public jge::Engine {

	public:

	Game();

	static Map gameMap;

	static void scaleImages();

	private:

};

#endif
