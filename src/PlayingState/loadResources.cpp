// loadResources.cpp - Loads required resources/unloads unrequired resources

#include <TGUI/TGUI.hpp>
#include <SFML/Audio.hpp>
#include <sstream>

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
pTurn = 0;
aNotificationShown = 0;

tgui::MessageBox::Ptr messageBox = Game::theme->load("MessageBox");
	
messageBox->setText("Player 1, place your armies.");
messageBox->addButton("OK");
messageBox->connect("ButtonPressed", &PlayingState::close, this);
messageBox->connect("Closed", &PlayingState::close, this);
messageBox->setPosition(283, 330);

Game::gui.add(messageBox, "messageBox");

turn.setFont(*Game::gui.getFont());
turn.setColor(sf::Color(190, 190, 190));
turn.setPosition(795, 53);
turn.setCharacterSize(30);

troops.setFont(*Game::gui.getFont());
troops.setColor(sf::Color(190, 190, 190));
troops.setPosition(795, 93);
troops.setCharacterSize(30);

money.setFont(*Game::gui.getFont());
money.setColor(sf::Color(190, 190, 190));
money.setPosition(795, 133);
money.setCharacterSize(30);

states.setFont(*Game::gui.getFont());
states.setColor(sf::Color(190, 190, 190));
states.setPosition(795, 173);
states.setCharacterSize(30);

std::ostringstream str;

turn.setString("Player: 1");
str << "Troops: " << player[0].getTroopCount();
troops.setString(str.str());
str.str(std::string());
str << "Money: " << player[0].getMoney();
money.setString(str.str());
str.str(std::string());
str << "States: " << player[0].getStatesOwned();
states.setString(str.str());

} 
