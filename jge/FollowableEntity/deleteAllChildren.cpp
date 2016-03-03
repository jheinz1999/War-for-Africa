// deleteAllChildren.cpp - removes a child from the Scene Graph

#include "../FollowableEntity.hpp"

namespace jge {

	void FollowableEntity::deleteAllChildren() {

	std::map<std::string, FollowableEntity*>::iterator locator = children.begin(); // Iterator to find id

		while (locator != children.end()) { // If found
	
		children.erase(locator); // Remove key/value pair from map
		locator++;
	
		}

	}

}
