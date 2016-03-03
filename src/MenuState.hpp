// MenuState.hpp - Game state for playing game

#ifndef __MENUSTATE_HPP__
#define __MENUSTATE_HPP__

#include "../jge/jge.hpp"

class MenuState : public jge::IState { // Menu state. Must inherit from IState interface for clean/easy gamestate switching.

	public:

	void update(sf::Time dt);
	void draw(sf::RenderWindow &window);
	void loadResources();
	void processEvents(sf::RenderWindow &window, sf::Event event);
	void handleInput();

	private:

};

#endif
