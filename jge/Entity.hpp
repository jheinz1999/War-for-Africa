// Entity.hpp - Base class for all entities in a game

#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__

#include <string>

#include <SFML/Graphics.hpp>

namespace jge {

	class Entity {

		public:

		Entity();
		~Entity();

		virtual bool setTexture(std::string tString); // Sets texture

		virtual void draw(sf::RenderWindow &window); // Draws to screen

		virtual sf::FloatRect getBoundingBox(); // Returns bounding box for entity

		virtual void setPosition(sf::Vector2f pos); // Sets position

		virtual sf::Vector2f getPosition(); // gets position

		virtual void scale(float s1, float s2); // scales sprite

		virtual sf::Sprite* getSprite();

		protected:

		sf::Sprite* sprite; // Sprite
		sf::Texture texture; // Texture

	};

}

#endif
