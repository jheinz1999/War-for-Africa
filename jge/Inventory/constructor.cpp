// constructor.cpp - Inv constructor.

#include "../Inventory.hpp"

namespace jge {

	Inventory::Inventory() {

	impact.loadFromFile("impact.ttf");

	hText.setFont(impact);
	hText.setCharacterSize(75);
	hText.setColor(sf::Color(255, 77, 66));
	hText.setPosition(265, 25);
	hText.setString("Inventory");

	abc = new sf::RectangleShape(sf::Vector2f(200, 200));
	abc->setPosition(500, 120);
	abc->setFillColor(sf::Color(128, 128, 150));

		for (int x = 0; x < 15; x++) {
	
		id[x] = 0;
	
		button[x] = sf::RectangleShape(sf::Vector2f(400, 30));
		button[x].setPosition(0, x * 30 + 120);
		button[x].setFillColor(sf::Color(150, 128, 128));
	
		iText[x].setFont(impact);
		iText[x].setCharacterSize(30);
		iText[x].setColor(sf::Color::White);
		iText[x].setPosition(50, x * 30 + 117);
		iText[x].setString("Empty x0");
	
		iAbout[x].setFont(impact);
		iAbout[x].setCharacterSize(25);
		iAbout[x].setColor(sf::Color::White);
		iAbout[x].setPosition(410, 350);
		iAbout[x].setString("This inventory slot is empty.");

		}

	}

}
