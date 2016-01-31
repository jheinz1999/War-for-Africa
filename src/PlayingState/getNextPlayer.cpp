#include <TGUI/TGUI.hpp>

#include "../PlayingState.hpp"
#include "../Controller.hpp"
#include "../Game.hpp"

Controller PlayingState::getNextPlayer() {

	if (currentPlayer == Controller::Player1) {

	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText("Player 2, place your armies.");

	return Controller::Player2;

	}

	if (currentPlayer == Controller::Player2) {

	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText("Player 3, place your armies.");

	return Controller::Player3;

	}

	if (currentPlayer == Controller::Player3) {

	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText("Player 4, place your armies.");

	return Controller::Player4;

	}

	if (currentPlayer == Controller::Player4) {

	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText("Player 1, place your armies.");

	return Controller::Player1;

	}

}
