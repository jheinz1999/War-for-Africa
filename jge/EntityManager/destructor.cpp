// destructor.cpp - Destructor for entity manager

#include "../EntityManager.hpp"

namespace jge {

	EntityManager::~EntityManager() {

		std::for_each(entities.begin(), entities.end(), GameObjectDeallocator());

	}

}

