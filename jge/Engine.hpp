// Engine.hpp - Base class containing important functions

#ifndef __ENGINE_HPP__
#define __ENGINE_HPP__

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <string>
#include <map>

#include "jge.hpp"

namespace jge {

	class Engine {

		public:

		Engine();

		static sf::RenderWindow window; // Window for game
		static jge::StateManager stateManager; // manages game states
		static jge::EntityManager entityManager; // manages entities
		static sf::VideoMode getCurrentScreenSize(); // Returns desktop resolution
		static sf::VideoMode getCurrentWindowSize(); // returns window resolution
		static bool isMouseDown; // is true when left mouse button is clicked
		static bool isRightDown; // is true when right mouse button is clicked
		static bool isMouseClicked;
		static bool isRightClicked;
		static tgui::Gui gui;
		static tgui::Theme::Ptr theme;
		static std::map<std::string, sf::Keyboard::Key> keyCode; // contains key codes for various actions

		void loadSettings(std::string path); // loads settings from config files

		void run(std::string name, sf::VideoMode res, bool fullscreen); // game loop

		protected:

	};

}

#endif
