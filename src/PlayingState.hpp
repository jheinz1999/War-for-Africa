// PlayingState.hpp - Game state for playing game

#ifndef __PLAYINGSTATE_HPP__
#define __PLAYINGSTATE_HPP__

#include "../jge/jge.hpp"

class PlayingState : public jge::IState {

	public:

	void update();
	void draw(sf::RenderWindow &window);
	void loadResources();
	void processEvents(sf::RenderWindow &window, sf::Event event);

	private:

};

#endif
