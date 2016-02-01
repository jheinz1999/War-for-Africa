// PlayingState.hpp - Game state for playing game

#ifndef __PLAYINGSTATE_HPP__
#define __PLAYINGSTATE_HPP__

#include <SFML/Audio.hpp>
#include <memory>

#include "../jge/jge.hpp"
#include "Controller.hpp"

class PlayingState : public jge::IState { // Game state. Must inherit from IState interface for clean/easy gamestate switching.

	public:

	void update();
	void draw(sf::RenderWindow &window);
	void loadResources();
	void processEvents(sf::RenderWindow &window, sf::Event event);
	void handleInput(sf::Keyboard::Key key);

	private:

	void setSpriteColors();
	std::string checkMouseHover();
	void placeArmies();
	int stage;
	Controller currentPlayer;
	int armiesToPlace, armiesPlaced;
	Controller getNextPlayer();
	sf::Music music;
	sf::SoundBuffer buffer, b2;
	sf::Sound sound, sound2;
	void close();

};

#endif
