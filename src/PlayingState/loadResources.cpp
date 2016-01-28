// loadResources.cpp - Loads required resources/unloads unrequired resources

#include <iostream>

#include "../PlayingState.hpp"
#include "../Game.hpp"

void PlayingState::loadResources() {

Game::scaleImages();
stage = 1;
currentPlayer = Controller::Player1;
armiesToPlace = 1;

} 
