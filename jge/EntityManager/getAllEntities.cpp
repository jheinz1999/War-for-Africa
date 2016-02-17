// getAllEntities.cpp - Returns a pointer to the map of entities.

#include <string>
#include <map>

#include "../EntityManager.hpp"

namespace jge {

	std::map<std::string, Entity*>* EntityManager::getAllEntities() {

	return &entities;

	}

}
