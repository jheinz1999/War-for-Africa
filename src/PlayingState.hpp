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

	sf::Music music;
	sf::SoundBuffer buffer, b2;
	sf::Sound sound, sound2;
	int stage;
	Controller currentPlayer;
	int armiesToPlace, armiesPlaced;
	Player player[4];
	bool aNotificationShown, mNotificationShown;
	bool moveSourceSelected, moving;
	std::string moveSource, moveDestination;

	sf::Text turn, troops, states, money;

};

#endif
