// constructor.cpp - Map constructor

#include "../Map.hpp"
#include "../MapPiece.hpp"
#include "../Game.hpp"

Map::Map() {

MapPiece* algeria = new MapPiece();
MapPiece* mali = new MapPiece();
MapPiece* mauritania = new MapPiece();

algeria->setTexture("Graphics/Countries/Algeria/Algeria1.png");
mali->setTexture("Graphics/Countries/Mali/Mali0.png");
mauritania->setTexture("Graphics/Countries/Mauritania/Mari0.png");

entityManager.addEntity("algeria", algeria);
entityManager.addEntity("mali", mali);
entityManager.addEntity("mauritania", mauritania);

} 
