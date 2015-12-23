// PlayingState.hpp - Game state for playing game

#ifndef __PLAYINGSTATE_HPP__
#define __PLAYINGSTATE_HPP__

#include "../jge/jge.hpp"

class PlayingState : public jge::IState { // Game state. Must inherit from IState interface for clean/easy gamestate switching.

	public:

	void update();
	void draw(sf::RenderWindow &window);
	void loadResources();
	void processEvents(sf::RenderWindow &window, sf::Event event);
	void handleInput(sf::Keyboard::Key key);

	private:

};

#endif
