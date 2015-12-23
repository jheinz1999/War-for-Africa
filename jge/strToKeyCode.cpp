// strToKeyCode.cpp

#include "strToKeyCode.hpp"

namespace jge {

	sf::Keyboard::Key strToKeyCode(std::string key) { // converts std::string to sf::Keyboard::Key

		if (key.length() == 1) {



		}

		if (key.length() == 3) {

			if (key == "ESC")
			return sf::Keyboard::Escape;

		}

	}

}
