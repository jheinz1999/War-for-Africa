// setDimensions.cpp - Functions for setting tilemap dimensions.

#include <iostream>

#include "../TileMap.hpp"
#include "../Engine.hpp"

namespace jge {

	void TileMap::setDimensions(int w, int h) {

	width = w;

	height = h;

	std::cout << "Dimensions set\n";

	}

	void TileMap::setWidth(int w) {

	width = w;

	}

	void TileMap::setHeight(int h) {

	height = h;

	}

	void TileMap::setRenderSize(int x, int y) {

	renderX = x;
	renderY = y;

	tilemapView.setSize((float)tWidth * renderX, (float)tHeight * renderY);

	std::cout << "Render size set\n";

	}

	void TileMap::setPosition(float x, float y, float a, float b) { 
	
	xStart = x;
	yStart = y;

	tilemapView.setViewport(sf::FloatRect(x, y, (float)tWidth * renderX / Engine::getNativeResolution().x, (float)tHeight * renderY / Engine::getNativeResolution().y)); 

	tilemapView.setCenter(tilemapView.getSize().x / 2, tilemapView.getSize().y / 2);

	currentTile = sf::Vector2i(width / 2, height / 2);

	}

	void TileMap::setCenter(sf::Vector2f center) {

	tilemapView.setCenter(center);
		

	}

	void TileMap::move(sf::Vector2f amount, sf::Time dt) {

	setCenter(tilemapView.getCenter() + (amount * dt.asSeconds()));

	}

}
