// addEntity.cpp - Adds an entity to the Entity Manager.

#include <map>

#include "../EntityManager.hpp"

namespace jge {

	void EntityManager::addEntity(std::string id, Entity *entity) {

	entities.insert(std::pair<std::string, Entity*>(id, entity));

	}

}
