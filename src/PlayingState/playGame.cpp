// playGame.cpp - Game logic

#include "../PlayingState.hpp"
#include "../Game.hpp"

void PlayingState::playGame() {

int current = currentPlayer;

double dough = player[current].calculateIncome();

std::ostringstream str;

	switch (stage) {

		case 1: // Collect money

			if (!Game::gui.get("messageBox")->isVisible()) {

			std::cout << "inside\n";

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

		break;

		case 4: // Combat

		break;

		case 5: // Purchase goods

		break;

		case 6: // Pay taxes

		break;

	}

}
