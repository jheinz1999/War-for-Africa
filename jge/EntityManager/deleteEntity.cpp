// deleteEntity.cpp - Removes an entity from the map.

#include <map>
#include <string>

#include "../EntityManager.hpp"

namespace jge {

	void EntityManager::deleteEntity(std::string id) {

	std::map<std::string, Entity*>::iterator locator = entities.find(id); // Iterator to find id

		if (locator != entities.end()) { // If found
	
		delete locator->second;
		entities.erase(locator); // Remove key/value pair from map

		}

	}

}
