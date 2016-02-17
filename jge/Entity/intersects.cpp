// intersects.cpp - collision

#include "../Entity.hpp"

namespace jge {

	bool Entity::intersects(Entity* entity) {

		if (this->getBoundingBox().intersects(entity->getBoundingBox()))
		return 1;

		else
		return 0;

	}

}
