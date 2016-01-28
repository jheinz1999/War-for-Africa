// draw.cpp - draws map

#include <SFML/Graphics.hpp>
#include <string>

#include "../Map.hpp"
#include "../Game.hpp"

void Map::draw(sf::RenderWindow &window) {

entityManager.drawAllEntities(window);

sf::Font font;
font.loadFromFile("Graphics/DejaVuSans.ttf");

sf::Text troopText;

troopText.setFont(font);
troopText.setColor(sf::Color::Red);
troopText.setCharacterSize(15);
troopText.setOrigin(troopText.getGlobalBounds().width / 2, troopText.getGlobalBounds().height / 2);

sf::CircleShape troopCount;
troopCount.setFillColor(sf::Color::Blue);
troopCount.setRadius(20);
troopCount.setOrigin(troopCount.getGlobalBounds().width / 2, troopCount.getGlobalBounds().height / 2);

troopCount.setPosition(getMapPiece("algeria")->getPosition());
troopText.setPosition(getMapPiece("algeria")->getPosition());
troopText.setString(std::to_string(getMapPiece("algeria")->getTroopCount()));

	if (getMapPiece("algeria")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("mali")->getPosition());
troopText.setPosition(getMapPiece("mali")->getPosition());
troopText.setString(std::to_string(getMapPiece("mali")->getTroopCount()));

	if (getMapPiece("mali")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("mauritania")->getPosition());
troopText.setPosition(getMapPiece("mauritania")->getPosition());
troopText.setString(std::to_string(getMapPiece("mauritania")->getTroopCount()));

	if (getMapPiece("mauritania")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("niger")->getPosition());
troopText.setPosition(getMapPiece("niger")->getPosition());
troopText.setString(std::to_string(getMapPiece("niger")->getTroopCount()));

	if (getMapPiece("niger")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("libya")->getPosition());
troopText.setPosition(getMapPiece("libya")->getPosition());
troopText.setString(std::to_string(getMapPiece("libya")->getTroopCount()));

	if (getMapPiece("libya")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("burkina faso")->getPosition());
troopText.setPosition(getMapPiece("burkina faso")->getPosition());
troopText.setString(std::to_string(getMapPiece("burkina faso")->getTroopCount()));

	if (getMapPiece("burkina faso")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("chad")->getPosition());
troopText.setPosition(getMapPiece("chad")->getPosition());
troopText.setString(std::to_string(getMapPiece("chad")->getTroopCount()));

	if (getMapPiece("chad")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("cote divoire")->getPosition());
troopText.setPosition(getMapPiece("cote divoire")->getPosition());
troopText.setString(std::to_string(getMapPiece("cote divoire")->getTroopCount()));

	if (getMapPiece("cote divoire")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("egypt")->getPosition());
troopText.setPosition(getMapPiece("egypt")->getPosition());
troopText.setString(std::to_string(getMapPiece("egypt")->getTroopCount()));

	if (getMapPiece("egypt")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("senegal")->getPosition());
troopText.setPosition(getMapPiece("senegal")->getPosition());
troopText.setString(std::to_string(getMapPiece("senegal")->getTroopCount()));

	if (getMapPiece("senegal")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("sudan")->getPosition());
troopText.setPosition(getMapPiece("sudan")->getPosition());
troopText.setString(std::to_string(getMapPiece("sudan")->getTroopCount()));

	if (getMapPiece("sudan")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("guinea")->getPosition());
troopText.setPosition(getMapPiece("guinea")->getPosition());
troopText.setString(std::to_string(getMapPiece("guinea")->getTroopCount()));

	if (getMapPiece("guinea")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("ethiopia")->getPosition());
troopText.setPosition(getMapPiece("ethiopia")->getPosition());
troopText.setString(std::to_string(getMapPiece("ethiopia")->getTroopCount()));

	if (getMapPiece("ethiopia")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("nigeria")->getPosition());
troopText.setPosition(getMapPiece("nigeria")->getPosition());
troopText.setString(std::to_string(getMapPiece("nigeria")->getTroopCount()));

	if (getMapPiece("nigeria")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("morocco")->getPosition());
troopText.setPosition(getMapPiece("morocco")->getPosition());
troopText.setString(std::to_string(getMapPiece("morocco")->getTroopCount()));

	if (getMapPiece("morocco")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("western sahara")->getPosition());
troopText.setPosition(getMapPiece("western sahara")->getPosition());
troopText.setString(std::to_string(getMapPiece("western sahara")->getTroopCount()));

	if (getMapPiece("western sahara")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("tunisia")->getPosition());
troopText.setPosition(getMapPiece("tunisia")->getPosition());
troopText.setString(std::to_string(getMapPiece("tunisia")->getTroopCount()));

	if (getMapPiece("tunisia")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("somalia")->getPosition());
troopText.setPosition(getMapPiece("somalia")->getPosition());
troopText.setString(std::to_string(getMapPiece("somalia")->getTroopCount()));

	if (getMapPiece("somalia")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("ghana")->getPosition());
troopText.setPosition(getMapPiece("ghana")->getPosition());
troopText.setString(std::to_string(getMapPiece("ghana")->getTroopCount()));

	if (getMapPiece("ghana")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("liberia")->getPosition().x + 20, getMapPiece("liberia")->getPosition().y + 50);
troopText.setPosition(getMapPiece("liberia")->getPosition().x + 20, getMapPiece("liberia")->getPosition().y + 50);
troopText.setString(std::to_string(getMapPiece("liberia")->getTroopCount()));

	if (getMapPiece("liberia")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("sierra leone")->getPosition().x, getMapPiece("sierra leone")->getPosition().y + 50);
troopText.setPosition(getMapPiece("sierra leone")->getPosition().x, getMapPiece("sierra leone")->getPosition().y + 50);
troopText.setString(std::to_string(getMapPiece("sierra leone")->getTroopCount()));

	if (getMapPiece("sierra leone")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("uganda")->getPosition());
troopText.setPosition(getMapPiece("uganda")->getPosition());
troopText.setString(std::to_string(getMapPiece("uganda")->getTroopCount()));

	if (getMapPiece("uganda")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("central republic")->getPosition());
troopText.setPosition(getMapPiece("central republic")->getPosition());
troopText.setString(std::to_string(getMapPiece("central republic")->getTroopCount()));

	if (getMapPiece("central republic")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("cameroon")->getPosition());
troopText.setPosition(getMapPiece("cameroon")->getPosition());
troopText.setString(std::to_string(getMapPiece("cameroon")->getTroopCount()));

	if (getMapPiece("cameroon")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("congo")->getPosition());
troopText.setPosition(getMapPiece("congo")->getPosition());
troopText.setString(std::to_string(getMapPiece("congo")->getTroopCount()));

	if (getMapPiece("congo")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("gabon")->getPosition());
troopText.setPosition(getMapPiece("gabon")->getPosition());
troopText.setString(std::to_string(getMapPiece("gabon")->getTroopCount()));

	if (getMapPiece("gabon")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("kenya")->getPosition());
troopText.setPosition(getMapPiece("kenya")->getPosition());
troopText.setString(std::to_string(getMapPiece("kenya")->getTroopCount()));

	if (getMapPiece("kenya")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("democratic congo")->getPosition());
troopText.setPosition(getMapPiece("democratic congo")->getPosition());
troopText.setString(std::to_string(getMapPiece("democratic congo")->getTroopCount()));

	if (getMapPiece("democratic congo")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("namibia")->getPosition());
troopText.setPosition(getMapPiece("namibia")->getPosition());
troopText.setString(std::to_string(getMapPiece("namibia")->getTroopCount()));

	if (getMapPiece("namibia")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("angola")->getPosition());
troopText.setPosition(getMapPiece("angola")->getPosition());
troopText.setString(std::to_string(getMapPiece("angola")->getTroopCount()));

	if (getMapPiece("angola")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("tanzania")->getPosition());
troopText.setPosition(getMapPiece("tanzania")->getPosition());
troopText.setString(std::to_string(getMapPiece("tanzania")->getTroopCount()));

	if (getMapPiece("tanzania")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("mozambique")->getPosition());
troopText.setPosition(getMapPiece("mozambique")->getPosition());
troopText.setString(std::to_string(getMapPiece("mozambique")->getTroopCount()));

	if (getMapPiece("mozambique")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("zambia")->getPosition());
troopText.setPosition(getMapPiece("zambia")->getPosition());
troopText.setString(std::to_string(getMapPiece("zambia")->getTroopCount()));

	if (getMapPiece("zambia")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("botswana")->getPosition());
troopText.setPosition(getMapPiece("botswana")->getPosition());
troopText.setString(std::to_string(getMapPiece("botswana")->getTroopCount()));

	if (getMapPiece("botswana")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("south africa")->getPosition());
troopText.setPosition(getMapPiece("south africa")->getPosition());
troopText.setString(std::to_string(getMapPiece("south africa")->getTroopCount()));

	if (getMapPiece("south africa")->getTroopCount() > 0) {

	window.draw(troopCount);
	window.draw(troopText);
	
	}

troopCount.setPosition(getMapPiece("zimbabwe")->getPosition());
troopText.setPosition(getMapPiece("zimbabwe")->getPosition());

	if (getMapPiece("zimbabwe")->getTroopCount() > 0)
	window.draw(troopCount);

} 
