// loadResources.cpp - Loads required resources/unloads unrequired resources

#include <TGUI/TGUI.hpp>

#include "../PlayingState.hpp"
#include "../Game.hpp"

void close() {

Game::gui.get("messageBox")->hide();

}

void PlayingState::loadResources() {

Game::scaleImages();
stage = 0;
currentPlayer = Controller::Player1;
armiesToPlace = 1;
armiesPlaced = 0;

tgui::MessageBox::Ptr messageBox = Game::theme->load("MessageBox");
	
messageBox->setText("Player 1, place your armies.");
messageBox->addButton("OK");
messageBox->connect("ButtonPressed", close);
messageBox->connect("Closed", close);
messageBox->setPosition(283, 330);
Game::gui.add(messageBox, "messageBox");

} 
