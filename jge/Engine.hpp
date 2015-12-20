// Game.hpp - Contains resources for game

#ifndef __ENGINE_HPP__
#define __ENGINE_HPP__

#include <SFML/Graphics.hpp>
#include <string>

#include "jge.hpp"

namespace jge {

	class Engine {

		public:

		Engine();

		static sf::RenderWindow window;
		static jge::StateManager stateManager;
		static jge::EntityManager entityManager;
		static sf::VideoMode getCurrentScreenSize();
		static bool isMouseDown;
		static bool isRightDown;

		void run(std::string name, sf::VideoMode res);

		private:

	};

}

#endif
