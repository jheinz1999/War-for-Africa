// checkMouseHover.cpp - Checks which state is being hovered over

#include "../PlayingState.hpp"
#include "../Game.hpp"

std::string PlayingState::checkMouseHover() {

	if (Game::gui.get("messageBox")->isVisible())
	return "none";

	if (Game::gameMap.getMapPiece("algeria")->containsMouse()) {

	Game::gameMap.getMapPiece("algeria")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

	return "algeria";

	}

	else if (Game::gameMap.getMapPiece("mali")->containsMouse()) {

	Game::gameMap.getMapPiece("mali")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "mali";

	}

	else if (Game::gameMap.getMapPiece("mauritania")->containsMouse()) {

	Game::gameMap.getMapPiece("mauritania")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "mauritania";

	}

	else if (Game::gameMap.getMapPiece("libya")->containsMouse()) {

	Game::gameMap.getMapPiece("libya")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "libya";

	}

	else if (Game::gameMap.getMapPiece("niger")->containsMouse()) {

	Game::gameMap.getMapPiece("niger")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "niger";

	}

	else if (Game::gameMap.getMapPiece("burkina faso")->containsMouse()) {

	Game::gameMap.getMapPiece("burkina faso")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "burkina faso";

	}

	else if (Game::gameMap.getMapPiece("chad")->containsMouse()) {

	Game::gameMap.getMapPiece("chad")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "chad";

	}

	else if (Game::gameMap.getMapPiece("cote divoire")->containsMouse()) {

	Game::gameMap.getMapPiece("cote divoire")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "cote divoire";

	}

	else if (Game::gameMap.getMapPiece("egypt")->containsMouse()) {

	Game::gameMap.getMapPiece("egypt")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "egypt";

	}

	else if (Game::gameMap.getMapPiece("senegal")->containsMouse()) {

	Game::gameMap.getMapPiece("senegal")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "senegal";

	}

	else if (Game::gameMap.getMapPiece("sudan")->containsMouse()) {

	Game::gameMap.getMapPiece("sudan")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "sudan";

	}

	else if (Game::gameMap.getMapPiece("guinea")->containsMouse()) {

	Game::gameMap.getMapPiece("guinea")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "guinea";

	}

	else if (Game::gameMap.getMapPiece("morocco")->containsMouse()) {

	Game::gameMap.getMapPiece("morocco")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "morocco";

	}

	else if (Game::gameMap.getMapPiece("nigeria")->containsMouse()) {

	Game::gameMap.getMapPiece("nigeria")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "nigeria";

	}

	else if (Game::gameMap.getMapPiece("ethiopia")->containsMouse()) {

	Game::gameMap.getMapPiece("ethiopia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "ethiopia";

	}

	else if (Game::gameMap.getMapPiece("somalia")->containsMouse()) {

	Game::gameMap.getMapPiece("somalia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "somalia";

	}

	else if (Game::gameMap.getMapPiece("tunisia")->containsMouse()) {

	Game::gameMap.getMapPiece("tunisia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "tunisia";

	}

	else if (Game::gameMap.getMapPiece("western sahara")->containsMouse()) {

	Game::gameMap.getMapPiece("western sahara")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "western sahara";

	}

	else if (Game::gameMap.getMapPiece("ghana")->containsMouse()) {

	Game::gameMap.getMapPiece("ghana")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "ghana";

	}

	else if (Game::gameMap.getMapPiece("liberia")->containsMouse()) {

	Game::gameMap.getMapPiece("liberia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "liberia";

	}

	else if (Game::gameMap.getMapPiece("sierra leone")->containsMouse()) {

	Game::gameMap.getMapPiece("sierra leone")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "sierra leone";

	}

	else if (Game::gameMap.getMapPiece("cameroon")->containsMouse()) {

	Game::gameMap.getMapPiece("cameroon")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "cameroon";

	}

	else if (Game::gameMap.getMapPiece("uganda")->containsMouse()) {

	Game::gameMap.getMapPiece("uganda")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "uganda";

	}

	else if (Game::gameMap.getMapPiece("central republic")->containsMouse()) {

	Game::gameMap.getMapPiece("central republic")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "central republic";

	}

	else if (Game::gameMap.getMapPiece("congo")->containsMouse()) {

	Game::gameMap.getMapPiece("congo")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "congo";

	}

	else if (Game::gameMap.getMapPiece("gabon")->containsMouse()) {

	Game::gameMap.getMapPiece("gabon")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "gabon";

	}

	else if (Game::gameMap.getMapPiece("kenya")->containsMouse()) {

	Game::gameMap.getMapPiece("kenya")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "kenya";

	}

	else if (Game::gameMap.getMapPiece("democratic congo")->containsMouse()) {

	Game::gameMap.getMapPiece("democratic congo")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "democratic congo";

	}

	else if (Game::gameMap.getMapPiece("angola")->containsMouse()) {

	Game::gameMap.getMapPiece("angola")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "angola";

	}

	else if (Game::gameMap.getMapPiece("namibia")->containsMouse()) {

	Game::gameMap.getMapPiece("namibia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "namibia";

	}

	else if (Game::gameMap.getMapPiece("tanzania")->containsMouse()) {

	Game::gameMap.getMapPiece("tanzania")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "tanzania";

	}

	else if (Game::gameMap.getMapPiece("zambia")->containsMouse()) {

	Game::gameMap.getMapPiece("zambia")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "zambia";

	}

	else if (Game::gameMap.getMapPiece("mozambique")->containsMouse()) {

	Game::gameMap.getMapPiece("mozambique")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "mozambique";

	}

	else if (Game::gameMap.getMapPiece("zimbabwe")->containsMouse()) {

	Game::gameMap.getMapPiece("zimbabwe")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "zimbabwe";

	}

	else if (Game::gameMap.getMapPiece("botswana")->containsMouse()) {

	Game::gameMap.getMapPiece("botswana")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "botswana";

	}

	else if (Game::gameMap.getMapPiece("south africa")->containsMouse()) {

	Game::gameMap.getMapPiece("south africa")->getSprite()->setColor(sf::Color(0, 255, 0, 255));

		
		return "south africa";

	}

return "none";

}
