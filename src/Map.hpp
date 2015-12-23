// Map.hpp - Map object

#ifndef __MAP_HPP__
#define __MAP_HPP__

#include "../jge/EntityManager.hpp"
#include "../jge/Entity.hpp"

class Map {

	public:

	Map();

	void draw(sf::RenderWindow &window); // Draws all map-related entities
	jge::Entity* getMapPiece(std::string id); // Returns a reference to an entity

	private:

	jge::EntityManager entityManager; // Manages all map-related entitites

};

#endif
