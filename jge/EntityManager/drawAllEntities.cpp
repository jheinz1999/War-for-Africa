// drawAllEntites.cpp - Draws all entities managed by the Entity Manager.

#include <SFML/Graphics.hpp>
#include <map>
#include <string>

#include "../EntityManager.hpp"

namespace jge {

	void EntityManager::drawAllEntities(sf::RenderWindow &window) {

	std::map<std::string, Entity*>::iterator locator = entities.begin();

		while (locator != entities.end()) {

		locator->second->draw(window);
		locator++;

		}

	}

}
