// draw.cpp - Draws tilemap to the screen.

#include <vector>
#include <SFML/Graphics.hpp>

#include "../TileMap.hpp"

namespace jge {

	std::vector<bool> TileMap::draw(sf::FloatRect entity, sf::Vector2f entityPos, sf::RenderWindow &window) {

		for (int x = 0; x < collisions.size(); x++)
		collisions[x] = 0;

		for (int y = 0; y < height; y++) {
	
			for (int x = 0; x < width; x++) {
		
				switch (map[x][y]) {
			
					case '0':
				
					tile.setTextureRect(sf::IntRect(tWidth * 0, tHeight * 0, tWidth, tHeight));
				
					break;
				
					case '1':
				
					tile.setTextureRect(sf::IntRect(tWidth * 1, tHeight * 0, tWidth, tHeight));
				
					break;
				
					case '2':
				
					tile.setTextureRect(sf::IntRect(tWidth * 2, tHeight * 0, tWidth, tHeight));
				
					break;
				
					case '3':
				
					tile.setTextureRect(sf::IntRect(tWidth * 3, tHeight * 0, tWidth, tHeight));
				
					break;
				
					case '4':
				
					tile.setTextureRect(sf::IntRect(tWidth * 4, tHeight * 0, tWidth, tHeight));
				
					break;
				
					case '5':
				
					tile.setTextureRect(sf::IntRect(tWidth * 5, tHeight * 0, tWidth, tHeight));
				
					break;
				
					case '6':
				
					tile.setTextureRect(sf::IntRect(tWidth * 6, tHeight * 0, tWidth, tHeight));
				
					break;
				
					case '7':
				
					tile.setTextureRect(sf::IntRect(tWidth * 7, tHeight * 0, tWidth, tHeight));
				
					break;
				
					case '8':
				
					tile.setTextureRect(sf::IntRect(tWidth * 8, tHeight * 0, tWidth, tHeight));
				
					break;
			
				}
			
			tile.setPosition(x * tWidth, y * tHeight);
		
			window.draw(tile);
		
				for (int z = 0; z < collisionTiles.size(); z++) {
			
					if (map[x][y] == collisionTiles[z]) {
				
						if (collisionMode[z] == 0) {
				
							if (tile.getGlobalBounds().intersects(entity)) {
					
							collisions[z] = 1;
					
							}
					
						}
					
						else {
					
							if (tile.getGlobalBounds().contains(entityPos)) {
					
							collisions[z] = 1;
					
							}
					
						}
				
					}
			
				}
		
			}
	
		}
	
	return collisions;

	}

}
