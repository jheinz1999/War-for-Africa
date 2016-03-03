// Entity.hpp - Base class for all entities in a game

#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__

#include <string>

#include <SFML/Graphics.hpp>

namespace jge {

	class Entity {

		public:

		Entity();
		virtual ~Entity();

		virtual bool setTexture(std::string tString); // Sets texture

		virtual void draw(sf::RenderWindow &window); // Draws to screen

		virtual sf::FloatRect getBoundingBox(); // Returns bounding box for entity

		virtual void setPosition(sf::Vector2f pos); // Sets position

		virtual sf::Vector2f getPosition(); // gets position

		virtual void scale(float s1, float s2); // scales sprite

		virtual bool containsMouse(); // Returns true if mouse is above sprite

		virtual sf::Sprite* getSprite();

		virtual bool intersects(Entity* entity);

		virtual void setName(std::string name);

		virtual std::string getName();

		virtual bool isVisible() {return visible;}

		private:

		sf::Sprite* sprite; // Sprite
		sf::Texture texture; // Texture
		sf::Image image; // Image

		std::string name; // personal id

		bool visible;

	};

}

#endif
