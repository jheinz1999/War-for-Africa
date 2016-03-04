// load.cpp - Functions for loading the map.

#include <fstream>
#include <string>
#include <iostream>

#include "../TileMap.hpp"

namespace jge {

	void TileMap::load(std::string n) {

	std::cout << "Attempt\n";

	currentTile = sf::Vector2i(width / 2, height / 2);

	name = n;

	std::ifstream i;

	std::string maps = "Maps/" + name + ".map";

	i.open(maps.c_str());

	std::cout << "Try\n";

		if (i.fail())
		std::cout << "FAILED\n";

	std::cout << "Continue\n";

	map = new char*[height];

	std::cout << "Allocated\n";

		for (int x = 0; x < height; ++x)
		map[x] = new char[width];

		std::cout << "Done\n";

		for (int y = 0; y < height; y++) {
	
			for (int x = 0; x < width; x++) {
		
			i >> map[x][y];
		
			}
	
		}
	
	i.close();

	}

}

