// IFollowable.hpp - Interface for entities that are part of a scene graph

#ifndef __IFOLLOWABLE_HPP__
#define __IFOLLOWABLE_HPP__

#include <SFML/Graphics.hpp>
#include <map>

#include "Entity.hpp"

namespace jge {

	class FollowableEntity : public virtual Entity {

		public:

		virtual void setVehicle(FollowableEntity* vehicle); // sets the vehicle of an entity
		virtual FollowableEntity* getVehicle(); // returns the vehicle of the current entity
		virtual void addChild(FollowableEntity* child, std::string id); // adds a child to the scene graph
		virtual void deleteChild(std::string id); // Removes a child from the scene graph
		virtual void updateChildren(); // updates children transforms

		virtual void deleteAllChildren();

		private:
		
		std::map<std::string, FollowableEntity*> children;
		FollowableEntity* parent;

		sf::Vector2f currentPos;

		float currentRotation;

		bool hasBeenInitialized;

	};

}

#endif
