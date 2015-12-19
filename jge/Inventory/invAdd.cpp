// invAdd.cpp - adds an item to inventory.

#include "../Inventory.hpp"

namespace jge {

	bool Inventory::invAdd(int n, int q) {

	int x = 0;
	bool y = 0;

		while (!y) {
	
			while (x < 20) {
	
				if (id[x] == n) {
		
				y = 1;
				num[x] += q;
			
				updateInfo(x, n);
			
				return 1;
		
				}
				
			x++;
		
			}
		
		x = 0;
	
			while (x < 20) {
		
				if (!filled[x]) {
			
				y = 1;
				id[x] = n;
				num[x] += q;
				filled[x] = 1;
				updateInfo(x, n);
			
				return 1;
			
				}
		
			}
	
		}
	
	return 0;

	}

}
