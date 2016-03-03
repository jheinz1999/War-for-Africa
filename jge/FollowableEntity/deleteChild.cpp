// deleteChild.cpp - removes a child from the Scene Graph

#include "../FollowableEntity.hpp"

namespace jge {

	void FollowableEntity::deleteChild(std::string id) {

	std::map<std::string, FollowableEntity*>::iterator locator = children.find(id); // Iterator to find id

		if (locator != children.end()) { // If found
	
		children.erase(locator); // Remove key/value pair from map

		}

	}

}
