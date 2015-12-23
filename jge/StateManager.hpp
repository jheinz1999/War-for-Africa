// StateManager.hpp - Manages game states

#ifndef __STATEMANAGER_HPP__
#define __STATEMANAGER_HPP__

#include <string>

#include "IState.hpp"

namespace jge {

	class StateManager {

		public:

		~StateManager();

		IState* getCurrentState(); // Retrieves current game state
		void addState(std::string name, IState* gameState); // Adds game state to container.
		void setState(std::string name); // Sets current state to value pointed to by container.

		private:

		IState* state; // Pointer to current state
		std::map<std::string, IState*> stateList; // Container of valid game states

		struct GameObjectDeallocator { // Deallocates pointers

			void operator()(const std::pair<std::string, IState*> & p) const {
			
			delete p.second;
		
			}
		};

	};

}

#endif
