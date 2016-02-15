// EntityManager.hpp - Class for maintaining entities in a game

#ifndef __ENTITYMANAGER_HPP__
#define __ENTITYMANAGER_HPP__

#include <SFML/Graphics.hpp>
#include <string>
#include <map>

#include "Entity.hpp"

namespace jge {

	class EntityManager {

		public:

		~EntityManager();

		void addEntity(std::string id, Entity *entity); // Adds an entity to the manager
			
		void deleteEntity(std::string id); // Removes an entity from the manager

		int getEntityCount(); // Returns the number of entities in the game

		Entity* getEntity(std::string id); // Retrieves an entity from the manager
		
		template<class Type>
		Type getDerivedEntity(std::string id);

		void drawAllEntities(sf::RenderWindow &window); // Draws all entities 

		private:

		std::map<std::string, Entity*> entities; // Map containing all entities

		struct EntityDeallocator { // Deallocates pointers

			void operator()(const std::pair<std::string, Entity*> & p) const {
			
			delete p.second;
		
			}

		};

	};

#include "EntityManager/getDerivedEntity.hpp"

}

#endif
