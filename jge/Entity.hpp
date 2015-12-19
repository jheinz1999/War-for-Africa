// Entity.hpp - Base class for all entities in a game

#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__

#include <string>

#include <SFML/Graphics.hpp>

namespace jge {

	class Entity {

		public:

		virtual bool setTexture(std::string tString); // Sets texture

		virtual void draw(sf::RenderWindow &window); // Draws to screen

		virtual sf::FloatRect getBoundingBox(); // Returns bounding box for entity

		virtual void setPosition(sf::Vector2f pos); // Sets position

		protected:

		sf::Sprite sprite; // Sprite
		sf::Texture texture; // Texture

	};

}

#endif
