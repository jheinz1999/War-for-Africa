// setVehicle.cpp - sets the parent node

#include "../FollowableEntity.hpp"

namespace jge {

	void FollowableEntity::setVehicle(FollowableEntity* vehicle) {

	parent = vehicle;

	parent->addChild(this, this->getName());

	}

}
