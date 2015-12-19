// addEntity.cpp - Adds an entity to the Entity Manager.

#include <map>

#include "../StateManager.hpp"

namespace jge {

	void StateManager::addState(std::string name, IState* gameState) {

	stateList.insert(std::pair<std::string, IState*>(name, gameState));

	}

}
