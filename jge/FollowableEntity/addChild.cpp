// addChild.cpp - adds a child to the Scene Graph

#include <map>

#include "../FollowableEntity.hpp"

namespace jge {

	void FollowableEntity::addChild(FollowableEntity* child, std::string id) {

	children.insert(std::pair<std::string, FollowableEntity*>(id, child));

	}

}
