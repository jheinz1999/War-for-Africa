// placeArmies.cpp

#include <TGUI/TGUI.hpp>
#include <ctime>
#include <sstream>

#include "../PlayingState.hpp"
#include "../Game.hpp"

void PlayingState::placeArmies() {

	if (armiesToPlace != 0 && ((stage == 0 && armiesPlaced != 1) || stage > 0)) {

	std::string hover = checkMouseHover();

		if (stage == 0 && hover != "none") {

			if (!((Game::gameMap.getMapPiece(hover)->getController() == currentPlayer || Game::gameMap.getMapPiece(hover)->getController() == Controller::Unclaimed) && Game::gameMap.getMapPiece(hover)->getRank() <= 3 && Game::gameMap.getMapPiece(hover)->isCoastal))
			Game::gameMap.getMapPiece(hover)->getSprite()->setColor(Game::gameMap.getMapPiece(hover)->getColor());

		}

		if (Game::isMouseClicked && hover != "none" && (Game::gameMap.getMapPiece(hover)->getController() == currentPlayer || Game::gameMap.getMapPiece(hover)->getController() == Controller::Unclaimed) && Game::gameMap.getMapPiece(hover)->getRank() <= 3 && Game::gameMap.getMapPiece(hover)->isCoastal) {

		sound2.play();

			if (stage > 0) {	

			Game::gameMap.getMapPiece(hover)->setController(currentPlayer);
			Game::gameMap.getMapPiece(hover)->changeTroopCount(1);

			armiesToPlace--;

			}

			else {

			std::srand(std::time(NULL));

			int armiesPlaced = rand() % 3 + 1;

			std::ostringstream str;
			str << "The king has sent " << armiesPlaced << " troops to " + hover + ".";

			Game::gameMap.getMapPiece(hover)->setController(currentPlayer);
			Game::gameMap.getMapPiece(hover)->changeTroopCount(armiesPlaced);

			player[pTurn].changeTroopCount(armiesPlaced);
			player[pTurn].addState(Game::gameMap.getMapPiece(hover)->getRank());

			armiesToPlace--;

			Game::gui.get("messageBox")->show();
			Game::gui.get<tgui::MessageBox>("messageBox")->setText((sf::String)str.str());

			}

		}

	}

	else if (armiesPlaced != 1 && armiesToPlace == 0) {

		if (currentPlayer == Controller::Player4) {

		stage++;
		armiesPlaced++;

		currentPlayer = getNextPlayer();

		}

		if (!Game::gui.get("messageBox")->isVisible()) {

		currentPlayer = getNextPlayer();
		armiesToPlace = 1;		

		}

	}

	else
	stage++;

}
