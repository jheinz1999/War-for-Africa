// setState.cpp - sets game state

#include "../StateManager.hpp"

namespace jge {

	void StateManager::setState(std::string name) {

		std::map<std::string, IState*>::iterator i = stateList.find(name);

			if (i != stateList.end())
			state = i->second;

	}

}
