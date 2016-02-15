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

		std::cout << "COMBAT\n";

		break;

		case 5: // Purchase goods

		break;

		case 6: // Pay taxes

		break;

	}

}
