// invShow.cpp - Shows inventory.

#include "../Inventory.hpp"

namespace jge {

	void Inventory::invShow(sf::RenderWindow &window) {

	sf::Event event;

	int clicked;

		while (window.isOpen()) {
	
			while (window.pollEvent(event)) {
		
				if (event.type == sf::Event::Closed)
				window.close();
		
			}
		
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
			window.close();
		
			for (int x = 0; x < 15; x++) {
		
				if (button[x].getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(window)))) {
			
				button[x].setFillColor(sf::Color::Red);
			
					if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
					clicked = x;
			
				}
			
				else
				button[x].setFillColor(sf::Color(150, 128, 128));
			
				if (clicked == x)
				button[x].setFillColor(sf::Color::Yellow);
		
			}
		
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
		
			return;
		
			}
		
		window.clear(sf::Color(128, 128, 128));
	
		window.draw(hText);
	
			for (int x = 0; x < 15; x++) {
		
			window.draw(button[x]);
			window.draw(iText[x]);
		
			}
		
		window.draw(iAbout[clicked]);
		
		window.draw(*abc);
		
		window.display();
	
		sf::sleep(sf::seconds(0.0166667));
	
		}

	}

}
