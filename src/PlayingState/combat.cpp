// combat.cpp - Combat for game

#include <iostream>
#include <ctime>
#include <sstream>

#include "../PlayingState.hpp"
#include "../Game.hpp"
#include "../Controller.hpp"

void PlayingState::combat() {

	if (!cNotificationShown) {

	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText("Select states for combat.");

	cNotificationShown = 1;
	fought = 0;

	Game::gui.get("doneButton")->show();

	Game::gameMap.makeAllMovable();

	}

	else {

	std::string hover = checkMouseHover();

		if (hover != "none" && Game::gameMap.getMapPiece(hover)->getController() == currentPlayer && !moveSourceSelected) {

			if (Game::isMouseClicked && Game::gameMap.getMapPiece(hover)->isMovable() && Game::gameMap.getMapPiece(hover)->getTroopCount() > 1) {

			moveSourceSelected = 1;
		
			moveSource = hover;

			}

		}

		else if (moveSourceSelected) {

		Game::gameMap.getMapPiece(moveSource)->getSprite()->setColor(sf::Color(0, 36, 255, 255));

			for (int x = 0; x < Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->size(); x++) {

				if (Game::gameMap.getMapPiece(Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x))->getController() != Controller::Unclaimed && Game::gameMap.getMapPiece(Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x))->getController() != currentPlayer)		
				Game::gameMap.getMapPiece(Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x))->getSprite()->setColor(sf::Color(45, 200, 0, 255));

				if (Game::gameMap.getMapPiece(Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x))->containsMouse() && !moving)
				Game::gameMap.getMapPiece(Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x))->getSprite()->setColor(sf::Color(0, 255, 0, 255));

				if (Game::isMouseClicked) {

					if (hover != "none" && hover == moveSource) {

					moveSourceSelected = 0;

					}

					if (hover != "none" && hover == Game::gameMap.getMapPiece(moveSource)->getAdjacentStates()->at(x) && (Game::gameMap.getMapPiece(hover)->getController() != Controller::Unclaimed && Game::gameMap.getMapPiece(hover)->getController() != currentPlayer)) {

					Game::gui.get<tgui::ChildWindow>("moveWindow")->get<tgui::Slider>("slider")->setMaximum(Game::gameMap.getMapPiece(moveSource)->getTroopCount() - 1);

					Game::gui.get("moveWindow")->show();

					moving = 1;

					moveDestination = hover;

					}					

				}

			}

			if (moving && !Game::gui.get("moveWindow")->isVisible()) {

				if (!cInitialized) {

				p1Troops = Game::gui.get<tgui::ChildWindow>("moveWindow")->get<tgui::Slider>("slider")->getValue();
				p2Troops = Game::gameMap.getMapPiece(moveDestination)->getTroopCount();

				p1Loss = 0;
				p2Loss = 0;

				cInitialized = 1;

				}

				if (!fought) {

				std::srand(std::time(NULL));
			
					if (p1Troops > p2Troops) {

						for (int x = 0; x < p2Troops; x++) {

						int p1Num = (rand() % 6) + 1;
						int p2Num = (rand() % 6) + 1;

							if (p1Num > p2Num)
							p2Loss++;

							else if (p2Num > p1Num)
							p1Loss++;

						}

					p2Troops -= p2Loss;
					p1Troops -= p1Loss;

						if (p2Troops > 0 && p1Troops > 0) {

						int remaining = p1Troops - p2Troops;

							for (int x = 0; x < remaining; x++) {

							int p1Num = (rand() % 6) + 1;
							int p2Num = (rand() % 6) + 1;

								if (p1Num > p2Num)
								p2Loss++;

								else if (p2Num > p1Num)
								p1Loss++;

							}

						}

					}

					else {
				
						for (int x = 0; x < p1Troops; x++) {

						int p1Num = (rand() % 6) + 1;
						int p2Num = (rand() % 6) + 1;

							if (p1Num > p2Num)
							p2Loss++;

							else if (p2Num > p1Num)
							p1Loss++;

						}

					p2Troops -= p2Loss;
					p1Troops -= p1Loss;

						if (p2Troops > 0 && p1Troops > 0) {

						int remaining = p2Troops - p1Troops;

							for (int x = 0; x < remaining; x++) {

							int p1Num = (rand() % 6) + 1;
							int p2Num = (rand() % 6) + 1;

								if (p1Num > p2Num)
								p2Loss++;

								else if (p2Num > p1Num)
								p1Loss++;

							}

						}

					}

				fought = 1;
				cNotificationStage = 1;

				}

				if (cNotificationStage == 1) {

				Game::gui.get("messageBox")->show();

				std::ostringstream str;

					if (p2Loss > Game::gameMap.getMapPiece(moveDestination)->getTroopCount()) {

					p2Loss = Game::gameMap.getMapPiece(moveDestination)->getTroopCount();

					}

				str << "You killed " << p2Loss << " of the enemy's troops.";

				Game::gui.get<tgui::MessageBox>("messageBox")->setText(str.str());

				cNotificationStage++;

				}

				if (cNotificationStage == 2 && !Game::gui.get("messageBox")->isVisible()) {

				Game::gui.get("messageBox")->show();

				std::ostringstream str;

					if (p1Loss > Game::gameMap.getMapPiece(moveSource)->getTroopCount()) {

					p1Loss = Game::gameMap.getMapPiece(moveSource)->getTroopCount();

					}

				str << "The enemy killed " << p1Loss << " of your troops.";

				Game::gui.get<tgui::MessageBox>("messageBox")->setText(str.str());

				cNotificationStage++;

				}

				if (cNotificationStage == 3 && !Game::gui.get("messageBox")->isVisible()) {

					if (p1Loss >= Game::gameMap.getMapPiece(moveSource)->getTroopCount()) {

					Game::gui.get("messageBox")->show();

					Game::gui.get<tgui::MessageBox>("messageBox")->setText("You have lost this battle.");

					Game::gameMap.getMapPiece(moveSource)->setController(Game::gameMap.getMapPiece(moveDestination)->getController());

					Game::gameMap.getMapPiece(moveDestination)->changeTroopCount(p2Loss * -1);
					Game::gameMap.getMapPiece(moveSource)->changeTroopCount(p1Loss * -1);

					Game::gameMap.getMapPiece(moveSource)->changeTroopCount(Game::gameMap.getMapPiece(moveDestination)->getTroopCount() - 1);
					Game::gameMap.getMapPiece(moveDestination)->changeTroopCount(Game::gameMap.getMapPiece(moveDestination)->getTroopCount() * -1 + 1);

					}

				   else if (p2Loss >= Game::gameMap.getMapPiece(moveDestination)->getTroopCount()) {

					Game::gui.get("messageBox")->show();

					Game::gui.get<tgui::MessageBox>("messageBox")->setText("You have won this battle.");

					Game::gameMap.getMapPiece(moveDestination)->changeTroopCount(p2Loss * -1);
					Game::gameMap.getMapPiece(moveSource)->changeTroopCount(p1Loss * -1);
	
					Game::gameMap.getMapPiece(moveDestination)->setController(currentPlayer);

					Game::gameMap.getMapPiece(moveDestination)->changeTroopCount(Game::gameMap.getMapPiece(moveSource)->getTroopCount() - 1);
					Game::gameMap.getMapPiece(moveSource)->changeTroopCount(Game::gameMap.getMapPiece(moveSource)->getTroopCount() * -1 + 1);

					}

					else {

					Game::gameMap.getMapPiece(moveDestination)->changeTroopCount(p2Loss * -1);
					Game::gameMap.getMapPiece(moveSource)->changeTroopCount(p1Loss * -1);

					}

				fought = 0;
				cNotificationStage = 0;
				moveSourceSelected = 0;
				moving = 0;
				cInitialized = 0;

				Game::gameMap.getMapPiece(moveSource)->setMovable(0);

				}

			}

		}

		else if (hover != "none")
		Game::gameMap.getMapPiece(hover)->getSprite()->setColor(Game::gameMap.getMapPiece(hover)->getColor());

	}

}
