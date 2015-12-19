// draw.cpp - draws map

#include <SFML/Graphics.hpp>

#include "../Map.hpp"
#include "../Game.hpp"

void Map::draw(sf::RenderWindow &window) {

entityManager.drawAllEntities(window);

} 
