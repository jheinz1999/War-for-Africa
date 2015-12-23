// IState.hpp - Interface for state classes

#ifndef __ISTATE_HPP__
#define __ISTATE_HPP__

#include <SFML/Graphics.hpp>

namespace jge {

	class IState {

		public:

		virtual void update() = 0; // Updates state logic
		virtual void draw(sf::RenderWindow &window) = 0; // Draws state entities
		virtual void loadResources() = 0; // Loads state resources
		virtual void processEvents(sf::RenderWindow &window, sf::Event event) = 0; // Processes state events
		virtual void handleInput(sf::Keyboard::Key key) = 0; // Handles state input

	};

}

#endif
