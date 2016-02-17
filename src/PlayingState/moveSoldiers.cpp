// moveSoldiers.cpp - Moves soldiers

#include <algorithm>

#include "../PlayingState.hpp"
#include "../Game.hpp"

void PlayingState::moveSoldiers() {

int current = currentPlayer;

	if (!mNotificationShown) {

	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText("Move your soldiers.");

	mNotificationShown = 1;

	Game::gui.get("doneButton")->show();

	Game::gameMap.makeAllMovable();

	}

	else {

	std::string hover = checkMouseHover();

		if (hover != "none" && Game::gameMap.getMapPiece(hover)->getController() == currentPlayer && !moveSourceSelected) {

			if (Game::isMouseClicked && Game::gameMap.getMapPiece(hover)->isMovable()) {

			moveSourceSelected = 1;
		
			moveSource = hover;

			}

		}

		else if (moveSourceSelected) {

		Game::gameMap.getMapPiece(moveSource)->getSprite()->setColor(sf::Color(0, 36, 255, 255));

			for (int x = 0; x < Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->size(); x++) {

				if (Game::gameMap.getMapPiece(Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x))->getController() == Controller::Unclaimed || Game::gameMap.getMapPiece(Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x))->getController() == currentPlayer)		
				Game::gameMap.getMapPiece(Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x))->getSprite()->setColor(sf::Color(45, 200, 0, 255));

				if (Game::gameMap.getMapPiece(Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x))->containsMouse() && !moving)
				Game::gameMap.getMapPiece(Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x))->getSprite()->setColor(sf::Color(0, 255, 0, 255));

				if (Game::isMouseClicked) {

					if (hover != "none" && hover == moveSource) {

					moveSourceSelected = 0;

					}

					if (hover != "none" && hover == Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x) && (Game::gameMap.getMapPiece(hover)->getController() == Controller::Unclaimed || Game::gameMap.getMapPiece(hover)->getController() == currentPlayer)) {

					Game::gui.get<tgui::ChildWindow>("moveWindow")->get<tgui::Slider>("slider")->setMaximum(Game::gameMap.getMapPiece(moveSource)->getTroopCount() - 1);

					Game::gui.get("moveWindow")->show();

					moving = 1;

					moveDestination = hover;

					}					

				}

			}

			if (moving && !Game::gui.get("moveWindow")->isVisible()) {

			Game::gameMap.getMapPiece(moveDestination)->changeTroopCount(Game::gui.get<tgui::ChildWindow>("moveWindow")->get<tgui::Slider>("slider")->getValue());

			Game::gameMap.getMapPiece(moveSource)->changeTroopCount(Game::gui.get<tgui::ChildWindow>("moveWindow")->get<tgui::Slider>("slider")->getValue() * -1);

			Game::gameMap.getMapPiece(moveDestination)->setController(currentPlayer);

			moving = 0;
			moveSourceSelected = 0;

			Game::gameMap.getMapPiece(moveSource)->setMovable(0);
			Game::gameMap.getMapPiece(moveDestination)->setMovable(0);

			}

		}

		else if (hover != "none")
		Game::gameMap.getMapPiece(hover)->getSprite()->setColor(Game::gameMap.getMapPiece(hover)->getColor());

	}

}
