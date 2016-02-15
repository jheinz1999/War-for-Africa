// update.cpp - Logic for game

#include <iostream>

#include "../PlayingState.hpp"
#include "../Game.hpp"
#include "../MapPiece.hpp"
#include "../Controller.hpp"

void PlayingState::update() {

setSpriteColors();

	if (stage == 0 && !Game::gui.get("messageBox")->isVisible())
	placeArmies();

	else
	playGame();

} 
