// destructor.cpp - Destructor for entity manager

#include "../EntityManager.hpp"

namespace jge {

	EntityManager::~EntityManager() {

		std::for_each(entities.begin(), entities.end(), EntityDeallocator());
		std::for_each(animatedEntities.begin(), animatedEntities.end(), AnimatedEntityDeallocator());

	}

}

