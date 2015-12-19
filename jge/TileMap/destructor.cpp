// destructor.cpp - Destructor for tilemap

#include "../TileMap.hpp"

namespace jge {

	TileMap::~TileMap() { // Deallocates map

		for (int y = 0; y < height; y++)
		delete[] map[y];
	
	delete[] map;

	}

}
