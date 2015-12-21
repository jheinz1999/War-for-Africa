// EntityManager.hpp - Class for maintaining entities in a game

#ifndef __ENTITYMANAGER_HPP__
#define __ENTITYMANAGER_HPP__

#include <SFML/Graphics.hpp>
#include <string>
#include <map>

#include "Entity.hpp"
#include "AnimatedEntity.hpp"

namespace jge {

	class EntityManager {

		public:

		~EntityManager();

		void addEntity(std::string id, Entity *entity); // Adds an entity to the manager
		
		void addAnimatedEntity(std::string id, AnimatedEntity* entity); // Adds an animated entity to the manager
			
		void deleteEntity(std::string id); // Removes an entity from the manager

		int getEntityCount(); // Returns the number of entities in the game

		Entity* getEntity(std::string id); // Retrieves an entity from the manager

		AnimatedEntity* getAnimatedEntity(std::string id); // Retrieves an animated entity from the manager

		void drawAllEntities(sf::RenderWindow &window); // Draws all entities 

		private:

		std::map<std::string, Entity*> entities; // Map containing all entities
		std::map<std::string, AnimatedEntity*> animatedEntities;

		struct EntityDeallocator { // Deallocates pointers

			void operator()(const std::pair<std::string, Entity*> & p) const {
			
			delete p.second;
		
			}

		};

		struct AnimatedEntityDeallocator { // Deallocates pointers

			void operator()(const std::pair<std::string, AnimatedEntity*> & p) const {
			
			delete p.second;
		
			}

		};

	};

}

#endif
