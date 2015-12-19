// StateManager.hpp - State Manager

#ifndef __STATEMANAGER_HPP__
#define __STATEMANAGER_HPP__

#include <string>

#include "IState.hpp"

namespace jge {

	class StateManager {

		public:

		~StateManager();

		IState* getCurrentState();
		void addState(std::string name, IState* gameState);
		void setState(std::string name);

		private:

		IState* state;
		std::map<std::string, IState*> stateList;

		struct GameObjectDeallocator { // Deallocates pointers

			void operator()(const std::pair<std::string, IState*> & p) const {
			
			delete p.second;
		
			}
		};

	};

}

#endif
