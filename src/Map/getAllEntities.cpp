// getAllEntities.cpp - Returns a pointer to the map of entities.

#include "../Map.hpp"

std::map<std::string, jge::Entity*>* Map::getAllEntities() {

return entityManager.getAllEntities();

}
