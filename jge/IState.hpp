// IState.hpp - Interface for state classes

#ifndef __ISTATE_HPP__
#define __ISTATE_HPP__

#include <SFML/Graphics.hpp>

namespace jge {

	class IState {

		public:

		virtual void update() = 0;
		virtual void draw(sf::RenderWindow &window) = 0;
		virtual void loadResources() = 0;
		virtual void processEvents(sf::RenderWindow &window, sf::Event event) = 0;

	};

}

#endif
