// updateInfo.cpp - Updates text info for inventory items.

#include "../Inventory.hpp"
#include <iostream>
#include <sstream>

namespace jge {

	void Inventory::updateInfo(int x, int y) {

		switch (y) {
	
			case 0:
		
			iAbout[x].setString("This inventory slot is empty.");
		
			iText[x].setString("Empty x0");
				
			break;
	
			case 1:
		
			iAbout[x].setString("A large brass key, presumably used to\nunlock a big door.");
		
			std::ostringstream o;
		
			o << "Key x" << num[x];
		
			std::cout << o.str() << std::endl;
		
			iText[x].setString(o.str());
		
			break;
	
		}

	}

}
