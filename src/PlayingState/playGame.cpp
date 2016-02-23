// playGame.cpp - Game logic

#include <iostream>

#include "../PlayingState.hpp"
#include "../Game.hpp"

void PlayingState::playGame() {

int current = currentPlayer;

double dough;

std::ostringstream str;

	switch (stage) {

		case 1: // Collect money

			if (!Game::gui.get("messageBox")->isVisible()) {

			dough = player[current].calculateIncome();

			str << "Money: " << player[current].getMoney();
			money.setString(str.str());
							
			str.str("");
			
			str << "You have received $" << dough << " in tax revenue.";
		
			Game::gui.get("messageBox")->show();
			Game::gui.get<tgui::MessageBox>("messageBox")->setText((sf::String)str.str());

			stage++;

			armiesToPlace = 2;

			}

		break;

		case 2: // Place soldiers

			if (!Game::gui.get("messageBox")->isVisible())
			placeArmies();

		break;

		case 3: // Move soldiers

		moveSoldiers();

		break;

		case 4: // Combat

		combat();

		break;

		case 5: // Purchase goods

		stage++;

		break;

		case 6: // Pay taxes

			if (!Game::gui.get("messageBox")->isVisible()) {

			dough = player[current].calculateTax();

			str << "Money: " << player[current].getMoney();
			money.setString(str.str());
							
			str.str("");
			
			str << "Your imperialization efforts costed $" << dough << " this turn.";
		
			Game::gui.get("messageBox")->show();
			Game::gui.get<tgui::MessageBox>("messageBox")->setText((sf::String)str.str());

			stage++;

			armiesToPlace = 2;

			}

		break;

		case 7:

			if (!Game::gui.get("messageBox")->isVisible()) {

			stage = 1;
			currentPlayer = getNextPlayer();

			}

		break;

	}

}
