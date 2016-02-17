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

void PlayingState::pressed() {

sound.play();

stage++;

Game::gui.get("doneButton")->hide();

}

void PlayingState::valueChanged() {

std::ostringstream o;

o << Game::gui.get<tgui::ChildWindow>("moveWindow")->get<tgui::Slider>("slider")->getValue();

Game::gui.get<tgui::ChildWindow>("moveWindow")->get<tgui::TextBox>("text")->setText(o.str());

}

void PlayingState::moveButtonPressed() {

sound.play();

Game::gui.get("moveWindow")->hide();

}

void PlayingState::moveWindowClosed() {

sound.play();

Game::gui.get("moveWindow")->hide();

moveSourceSelected = 0;

moving = 0;

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
	
messageBox->setText("Player 1, it is your turn.");
messageBox->addButton("OK");
messageBox->connect("ButtonPressed", &PlayingState::close, this);
messageBox->connect("Closed", &PlayingState::close, this);
messageBox->setPosition(283, 330);

Game::gui.add(messageBox, "messageBox");

tgui::Button::Ptr button = Game::theme->load("Button");

button->setText("Done");
button->connect("Pressed", &PlayingState::pressed, this);
button->setPosition(779, 712);
button->setSize(sf::Vector2f(200, 50));
button->hide();

Game::gui.add(button, "doneButton");

tgui::ChildWindow::Ptr moveWindow = Game::theme->load("ChildWindow");

tgui::Slider::Ptr slider = Game::theme->load("Slider");
slider->setMinimum(1);
slider->setPosition(sf::Vector2f(10, 10));
slider->setSize(sf::Vector2f(380, 30));
slider->connect("ValueChanged", &PlayingState::valueChanged, this);

tgui::TextBox::Ptr textBox = Game::theme->load("TextBox");
textBox->setReadOnly(1);
textBox->setText("1");
textBox->setPosition(sf::Vector2f(150, 45));
textBox->setSize(sf::Vector2f(50, 50));

tgui::Button::Ptr acceptButton = Game::theme->load("Button");

acceptButton->setText("OK");
acceptButton->setPosition(sf::Vector2f(100, 170));
acceptButton->setSize(sf::Vector2f(200, 50));
acceptButton->connect("Pressed", &PlayingState::moveButtonPressed, this);

moveWindow->add(slider, "slider");
moveWindow->add(textBox, "text");
moveWindow->add(acceptButton, "acceptButton");
moveWindow->setPosition(sf::Vector2f(283, 330));
moveWindow->connect("Closed", &PlayingState::moveWindowClosed, this);
moveWindow->hide();

Game::gui.add(moveWindow, "moveWindow");

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
