// Map.hpp - Map object

#ifndef __MAP_HPP__
#define __MAP_HPP__

#include "../jge/EntityManager.hpp"
#include "MapPiece.hpp"

class Map {

	public:

	Map();

	void draw(sf::RenderWindow &window); // Draws all map-related entities
	MapPiece* getMapPiece(std::string id); // Returns a reference to an entity

	sf::Color team1;
	sf::Color team2;
	sf::Color team3;
	sf::Color team4;
	sf::Color unclaimed;

	private:

	jge::EntityManager entityManager; // Manages all map-related entitites

};

#endif
