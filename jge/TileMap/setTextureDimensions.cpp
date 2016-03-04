// setTextureDimensions.cpp - Contains functions for setting tile dimensions.

#include <iostream>

#include "../TileMap.hpp"

namespace jge {

	void TileMap::setTextureSize(int w, int h) {

	tWidth = w;

	tHeight = h;

	std::cout << "Texture size set\n";

	}

	void TileMap::setTextureWidth(int w) {

	tWidth = w;

	}

	void TileMap::setTextureHeight(int h) {

	tHeight = h;

	}

}
