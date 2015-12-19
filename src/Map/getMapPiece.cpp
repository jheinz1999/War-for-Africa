// getMapPiece.cpp - Retrieves map piece

#include "../Map.hpp"
#include "../../jge/Entity.hpp"
#include "../Game.hpp"

jge::Entity* Map::getMapPiece(std::string id) {

return entityManager.getEntity(id);

} 
