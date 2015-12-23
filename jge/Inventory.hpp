// inventory.hpp - Contains player inventory data.

#ifndef __INVENTORY_HPP__
#define __INVENTORY_HPP__

#include <SFML/Graphics.hpp>

namespace jge {

	class Inventory {

	public:

	Inventory();

	int invSearch(int num); // takes ID as input, returns inventory slot where ID is stored
	bool invAdd(int num, int q); // Adds an item to inventory. Picks first available slot. Takes ID and quantity as input.
	void invShow(sf::RenderWindow &window); // Draws inventory
	void invClear(int x); // Clears inventory slot. Takes slot as parameter

	int id[20]; // Array containing IDs
	int num[20]; // Array containing quantities
	bool filled[20]; // Array that states whether or not a slot is filled

	private:

	sf::Texture bits;
	sf::Sprite sprite[15];

	sf::Text hText, iText[15], iAbout[15];
	sf::Font impact;
	sf::RectangleShape button[15], *abc; // I have no idea why, but for some reason if I don't manually allocate space for abc, it doesn't draw.
										 // Strange but it works. Maybe I'm using too much space and the stack is full?    								 
	void updateInfo(int x, int y);
	
	}; 

}

#endif
