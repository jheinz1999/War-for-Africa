// setTextureDimensions.cpp - Contains functions for setting tile dimensions.

#include "../TileMap.hpp"

namespace jge {

	void TileMap::setTextureSize(int w, int h) {

	tWidth = w;

	tHeight = h;

	}

	void TileMap::setTextureWidth(int w) {

	tWidth = w;

	}

	void TileMap::setTextureHeight(int h) {

	tHeight = h;

	}

}
