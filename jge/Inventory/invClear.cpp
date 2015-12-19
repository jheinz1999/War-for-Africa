// invClear.cpp - Clears a specified inventory slot.

#include "../Inventory.hpp"

namespace jge {

	void Inventory::invClear(int x) {

	id[x] = 0;
	num[x] = 0;
	filled[x] = 0;
	updateInfo(x, 0);

	}

}
