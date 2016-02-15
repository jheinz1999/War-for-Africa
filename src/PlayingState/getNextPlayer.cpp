#include <TGUI/TGUI.hpp>
#include <sstream>

#include "../PlayingState.hpp"
#include "../Controller.hpp"
#include "../Game.hpp"

Controller PlayingState::getNextPlayer() {

pTurn++;

std::ostringstream str;

aNotificationShown = 0;
mNotificationShown = 0;

	if (currentPlayer == Controller::Player1) {

	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText("Player 2, it is your turn.");

	turn.setString("Player: 2");
	str << "Troops: " << player[1].getTroopCount();
	troops.setString(str.str());
	str.str(std::string());
	str << "Money: " << player[1].getMoney();
	money.setString(str.str());
	str.str(std::string());
	str << "States: " << player[1].getStatesOwned();
	states.setString(str.str());

	return Controller::Player2;

	}

	if (currentPlayer == Controller::Player2) {

	turn.setString("Player: 3");
	str << "Troops: " << player[2].getTroopCount();
	troops.setString(str.str());
	str.str(std::string());
	str << "Money: " << player[2].getMoney();
	money.setString(str.str());
	str.str(std::string());
	str << "States: " << player[2].getStatesOwned();
	states.setString(str.str());

	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText("Player 3, it is your turn.");

	return Controller::Player3;

	}

	if (currentPlayer == Controller::Player3) {

	turn.setString("Player: 4");
	str << "Troops: " << player[3].getTroopCount();
	troops.setString(str.str());
	str.str(std::string());
	str << "Money: " << player[3].getMoney();
	money.setString(str.str());
	str.str(std::string());
	str << "States: " << player[3].getStatesOwned();
	states.setString(str.str());

	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText("Player 4, it is your turn.");

	return Controller::Player4;

	}

	if (currentPlayer == Controller::Player4) {

	turn.setString("Player: 1");
	str << "Troops: " << player[0].getTroopCount();
	troops.setString(str.str());
	str.str(std::string());
	str << "Money: " << player[0].getMoney();
	money.setString(str.str());
	str.str(std::string());
	str << "States: " << player[0].getStatesOwned();
	states.setString(str.str());


	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText("Player 1, it is your turn.");

	return Controller::Player1;

	}

}
