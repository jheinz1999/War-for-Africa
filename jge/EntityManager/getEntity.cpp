// getEntity.cpp - Retrieves an entity from the Entity Manager

#include <string>
#include <map>

#include "../EntityManager.hpp"

namespace jge {

	Entity* EntityManager::getEntity(std::string id) {

	std::map<std::string, Entity*>::iterator locator = entities.find(id);

		if (locator != entities.end()) {

		return locator->second;

		}

	return NULL;

	}

}
