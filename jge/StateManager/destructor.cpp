// destructor.cpp - Destructor for entity manager

#include "../StateManager.hpp"

namespace jge {

	StateManager::~StateManager() {

		std::for_each(stateList.begin(), stateList.end(), GameObjectDeallocator());

	}

}

