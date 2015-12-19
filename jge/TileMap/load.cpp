// load.cpp - Functions for loading the map.

#include <fstream>
#include <string>
#include <iostream>

#include "../TileMap.hpp"

namespace jge {

	void TileMap::load(std::string n) {

	name = n;

	std::ifstream i;

	std::string maps = "Maps/" + name + ".map";

	i.open(maps.c_str());

		if (i.fail())
		std::cout << "FAILED\n";

	map = new char*[height];

		for (int x = 0; x < height; ++x)
		map[x] = new char[width];

		for (int y = 0; y < height; y++) {
	
			for (int x = 0; x < width; x++) {
		
			i >> map[x][y];
		
			}
	
		}
	
	i.close();

	}

}

