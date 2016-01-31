// placeArmies.cpp

#include <TGUI/TGUI.hpp>

#include "../PlayingState.hpp"
#include "../Game.hpp"

void PlayingState::placeArmies() {

	if (armiesToPlace != 0 && ((stage == 0 && armiesPlaced != 3) || stage > 0)) {

	std::string hover = checkMouseHover();

		if (stage == 0 && hover != "none") {

			if (!((Game::gameMap.getMapPiece(hover)->getController() == currentPlayer || Game::gameMap.getMapPiece(hover)->getController() == Controller::Unclaimed) && Game::gameMap.getMapPiece(hover)->getRank() <= 3 && Game::gameMap.getMapPiece(hover)->isCoastal))
			Game::gameMap.getMapPiece(hover)->getSprite()->setColor(Game::gameMap.getMapPiece(hover)->getColor());

		}

		if (Game::isMouseClicked && hover != "none" && (Game::gameMap.getMapPiece(hover)->getController() == currentPlayer || Game::gameMap.getMapPiece(hover)->getController() == Controller::Unclaimed) && Game::gameMap.getMapPiece(hover)->getRank() <= 3 && Game::gameMap.getMapPiece(hover)->isCoastal) {

		Game::gameMap.getMapPiece(hover)->setController(currentPlayer);
		Game::gameMap.getMapPiece(hover)->changeTroopCount(1);

		armiesToPlace--;

		}

	}

	else if (armiesPlaced != 3) {

		if (currentPlayer == Controller::Player4)
		armiesPlaced++;

	armiesToPlace = 1;
	currentPlayer = getNextPlayer();

	}

	else
	stage++;

}
