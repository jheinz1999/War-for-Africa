// invSearch.cpp - Searches inventory for an item

#include "../Inventory.hpp"

namespace jge {

	int Inventory::invSearch(int n) {

		for (int x = 0; x < 20; x++) {
	
			if (id[x] == n && filled[x])
			return x;
	
		}
	
	return 666;

	}

}
