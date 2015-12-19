// inventory.hpp - Contains player inventory data.

#ifndef __INVENTORY_HPP__
#define __INVENTORY_HPP__

#include <SFML/Graphics.hpp>

namespace jge {

	class Inventory {

	public:

	Inventory();

	int invSearch(int num);
	bool invAdd(int num, int q);
	void invShow(sf::RenderWindow &window);
	void invClear(int x);

	int id[20];
	int num[20];
	bool filled[20];

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
