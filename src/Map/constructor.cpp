// constructor.cpp - Map constructor

#include "../Map.hpp"
#include "../MapPiece.hpp"
#include "../Game.hpp"

Map::Map() {

team1 = sf::Color(209, 86, 81, 255);
team2 = sf::Color(61, 69, 209, 255);
team3 = sf::Color(61, 209, 99, 255);
team4 = sf::Color(209, 207, 61, 255);
unclaimed = sf::Color(255, 255, 255, 255);

MapPiece* algeria = new MapPiece();
MapPiece* mali = new MapPiece();
MapPiece* mauritania = new MapPiece();
MapPiece* niger = new MapPiece();
MapPiece* libya = new MapPiece();

algeria->setTexture("Graphics/Countries/Algeria.png");
mali->setTexture("Graphics/Countries/Mali.png");
mauritania->setTexture("Graphics/Countries/Mari.png");
niger->setTexture("Graphics/Countries/Niger.png");
libya->setTexture("Graphics/Countries/Libya.png");

entityManager.addEntity("algeria", algeria);
entityManager.addEntity("mali", mali);
entityManager.addEntity("mauritania", mauritania);
entityManager.addEntity("niger", niger);
entityManager.addEntity("libya", libya);

} 
