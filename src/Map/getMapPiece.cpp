// getMapPiece.cpp - Retrieves map piece

#include "../Map.hpp"
#include "../MapPiece.hpp"
#include "../Game.hpp"

MapPiece* Map::getMapPiece(std::string id) {

return entityManager.getDerivedEntity<MapPiece*>(id);

} 
