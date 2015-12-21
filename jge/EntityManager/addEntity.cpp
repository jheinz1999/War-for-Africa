// addEntity.cpp - Adds an entity to the Entity Manager.

#include <map>

#include "../EntityManager.hpp"

namespace jge {

	void EntityManager::addEntity(std::string id, Entity *entity) {

	entities.insert(std::pair<std::string, Entity*>(id, entity));

	}

	void EntityManager::addAnimatedEntity(std::string id, AnimatedEntity *entity) {

	animatedEntities.insert(std::pair<std::string, AnimatedEntity*>(id, entity));

	}

}
