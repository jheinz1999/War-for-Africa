// setCollisionTile.cpp - adds tiles to collision database

#include "../TileMap.hpp"

namespace jge {

	void TileMap::setCollisionTile(char id, int mode) {

	collisionTiles.push_back(id);
	collisionMode.push_back(mode);
	collisions.push_back(0);

	}

	/*

	Collision Modes:

	0: Direct collision
	1: Inside the tile

	*/

}
