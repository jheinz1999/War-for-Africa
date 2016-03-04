// draw.cpp - Draws tilemap to the screen.

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

#include "../TileMap.hpp"
#include "../Engine.hpp"

namespace jge {

	std::vector<bool> TileMap::draw(sf::FloatRect entity, sf::Vector2f entityPos, sf::RenderWindow &window) {

	window.setView(tilemapView);

		for (int x = 0; x < collisions.size(); x++)
		collisions[x] = 0;

		for (int y = 0; y < height; y++) {
	
			for (int x = 0; x < width; x++) {
		
				switch (map[x][y]) {
			
					case '0':
				
					tile.setTextureRect(sf::IntRect(0, 0, 32, 32));
				
					break;
				
					case '1':
				
					tile.setTextureRect(sf::IntRect(32, 0, 32, 32));
				
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

					case '9':
				
					tile.setTextureRect(sf::IntRect(tWidth * 9, tHeight * 0, tWidth, tHeight));
				
					break;

					case 'a':
				
					tile.setTextureRect(sf::IntRect(tWidth * 0, tHeight * 1, tWidth, tHeight));
				
					break;

					case 'b':
				
					tile.setTextureRect(sf::IntRect(tWidth * 1, tHeight * 1, tWidth, tHeight));
				
					break;

					case 'c':
				
					tile.setTextureRect(sf::IntRect(tWidth * 2, tHeight * 1, tWidth, tHeight));
				
					break;

					case 'd':
				
					tile.setTextureRect(sf::IntRect(tWidth * 3, tHeight * 1, tWidth, tHeight));
				
					break;

					case 'e':
				
					tile.setTextureRect(sf::IntRect(tWidth * 4, tHeight * 1, tWidth, tHeight));
				
					break;

					case 'f':
				
					tile.setTextureRect(sf::IntRect(tWidth * 5, tHeight * 1, tWidth, tHeight));
				
					break;

					case 'g':
				
					tile.setTextureRect(sf::IntRect(tWidth * 6, tHeight * 1, tWidth, tHeight));
				
					break;

					case 'h':
				
					tile.setTextureRect(sf::IntRect(tWidth * 7, tHeight * 1, tWidth, tHeight));
				
					break;

					case 'i':
				
					tile.setTextureRect(sf::IntRect(tWidth * 8, tHeight * 1, tWidth, tHeight));
				
					break;

					case 'j':
				
					tile.setTextureRect(sf::IntRect(tWidth * 9, tHeight * 1, tWidth, tHeight));
				
					break;
			
			
				}
		
				
			tile.setPosition(x * tWidth, y * tHeight);
		
				if (tile.getPosition().x > tilemapView.getCenter().x - (Engine::getNativeResolution().x / 2) && tile.getPosition().x < tilemapView.getCenter().x + (Engine::getNativeResolution().x / 2) && tile.getPosition().y > tilemapView.getCenter().y - (Engine::getNativeResolution().y) && tile.getPosition().y < tilemapView.getCenter().y + (Engine::getNativeResolution().y / 2))
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
	
	window.setView(Engine::view);

	return collisions;

	}

}
