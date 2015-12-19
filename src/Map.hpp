// Map.hpp - Map object

#ifndef __MAP_HPP__
#define __MAP_HPP__

#include "../jge/EntityManager.hpp"
#include "../jge/Entity.hpp"

class Map {

	public:

	Map();

	void draw(sf::RenderWindow &window);
	jge::Entity* getMapPiece(std::string id);

	private:

	jge::EntityManager entityManager;	

};

#endif
