// PlayingState.hpp - Game state for playing game

#ifndef __PLAYINGSTATE_HPP__
#define __PLAYINGSTATE_HPP__

#include <SFML/Audio.hpp>
#include <memory>

#include "../jge/jge.hpp"
#include "Player.hpp"
#include "Controller.hpp"

class PlayingState : public jge::IState { // Game state. Must inherit from IState interface for clean/easy gamestate switching.

	public:

	void update();
	void draw(sf::RenderWindow &window);
	void loadResources();
	void processEvents(sf::RenderWindow &window, sf::Event event);
	void handleInput(sf::Keyboard::Key key);

	private:

	int pTurn;
	void setSpriteColors();
	std::string checkMouseHover();
	void placeArmies();
	Controller getNextPlayer();
	void close();
	void playGame();
	void moveSoldiers();
	void pressed();
	void valueChanged();
	void moveButtonPressed();
	void moveWindowClosed();
	void combat();
	void slider2Changed();
	void slider1Changed();
	void attackWindowClosed();
	void attackButtonPressed();

	sf::Music music;
	sf::SoundBuffer buffer, b2;
	sf::Sound sound, sound2;
	int stage;
	Controller currentPlayer;
	int armiesToPlace, armiesPlaced;
	Player player[4];
	bool aNotificationShown, mNotificationShown, cNotificationShown;
	bool moveSourceSelected, moving, fought, cInitialized;
	std::string moveSource, moveDestination;
	int cNotificationStage;
	int p1Atk, p1Def, p2Atk, p2Def, p1Loss, p2Loss;

	sf::Text turn, troops, states, money;

};

#endif
