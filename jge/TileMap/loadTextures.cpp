// loadTextures.cpp - Functions for loading tilemap textures

#include <string>

#include "../TileMap.hpp"

namespace jge {

	void TileMap::loadTexture(std::string t) {

	std::cout << "Trying\n";

	texture.loadFromFile(t);

	tile.setTexture(texture);

	std::cout << "Texture loaded\n";

	}

	void TileMap::loadTexture(std::string t, int w, int h) {

	texture.loadFromFile(t);

	tWidth = w;

	tHeight = h;

	tile.setTexture(texture);

	}

}
