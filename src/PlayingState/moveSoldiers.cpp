// moveSoldiers.cpp - Moves soldiers

#include "../PlayingState.hpp"
#include "../Game.hpp"

void PlayingState::moveSoldiers() {

int current = currentPlayer;

	if (!mNotificationShown) {

	Game::gui.get("messageBox")->show();
	Game::gui.get<tgui::MessageBox>("messageBox")->setText("Move your soldiers.");

	mNotificationShown = 1;

	Game::gui.get("doneButton")->show();

	}

}
