// makeAllMovable.cpp - Makes all states movable

#include "../Map.hpp"
#include "../MapPiece.hpp"
#include "../../jge/Entity.hpp"

void Map::makeAllMovable() {

std::map<std::string, jge::Entity*>::iterator locator = getAllEntities()->begin();

		while (locator != getAllEntities()->end()) {

		static_cast<MapPiece*>(locator->second)->setMovable(1);		

		locator++;

		}

}
