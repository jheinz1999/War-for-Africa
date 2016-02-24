#include <TGUI/TGUI.hpp>
#include <sstream>

#include "../PlayingState.hpp"
#include "../Controller.hpp"
#include "../Game.hpp"

void PlayingState::getNextPlayer() {

pTurn++;

std::ostringstream str;

aNotificationShown = 0;
mNotificationShown = 0;
cNotificationShown = 0;

int pNum = currentPlayer;

int deadCount;

	if (currentPlayer != Controller::Player4) {

	pNum++;

	currentPlayer = (Controller)pNum;

	}

	else {

	currentPlayer = Controller::Player1;

	}

	while (player[currentPlayer].isDead()) {

	deadCount++;

		if (currentPlayer != Controller::Player4) {

		pNum++;
		currentPlayer = (Controller)pNum;

		}

		else
		currentPlayer = Controller::Player1;

	}

	if (deadCount < 3) {

	str << "Player " << currentPlayer + 1 << ", it is your turn.";
	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText(str.str());
	str.str(std::string());
	str << "Player: " << currentPlayer + 1;
	turn.setString(str.str());
	str.str(std::string());
	str << "Troops: " << player[currentPlayer].getTroopCount();
	troops.setString(str.str());
	str.str(std::string());
	str << "Money: " << player[currentPlayer].getMoney();
	money.setString(str.str());
	str.str(std::string());
	str << "States: " << player[currentPlayer].getStatesOwned();
	states.setString(str.str());

	}

	else {

	stage++;

	}

}
