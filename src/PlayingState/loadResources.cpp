// loadResources.cpp - Loads required resources/unloads unrequired resources

#include <TGUI/TGUI.hpp>
#include <SFML/Audio.hpp>

#include "../PlayingState.hpp"
#include "../Game.hpp"

void PlayingState::close() {

sound.play();

Game::gui.get("messageBox")->hide();

}

void PlayingState::loadResources() {

buffer.loadFromFile("Sounds/Interface/click.wav");
sound.setBuffer(buffer);

b2.loadFromFile("Sounds/Interface/add.ogg");
sound2.setBuffer(b2);

music.openFromFile("Sounds/Music/music.ogg");
music.setLoop(1);

music.play();

Game::scaleImages();
stage = 0;
currentPlayer = Controller::Player1;
armiesToPlace = 1;
armiesPlaced = 0;

tgui::MessageBox::Ptr messageBox = Game::theme->load("MessageBox");
	
messageBox->setText("Player 1, place your armies.");
messageBox->addButton("OK");
messageBox->connect("ButtonPressed", &PlayingState::close, this);
messageBox->connect("Closed", &PlayingState::close, this);
messageBox->setPosition(283, 330);
Game::gui.add(messageBox, "messageBox");

} 
