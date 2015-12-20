// MenuState.hpp - Game state for playing game

#ifndef __MENUSTATE_HPP__
#define __MENUSTATE_HPP__

#include "../jge/jge.hpp"

class MenuState : public jge::IState {

	public:

	void update();
	void draw(sf::RenderWindow &window);
	void loadResources();
	void processEvents(sf::RenderWindow &window, sf::Event event);

	private:

};

#endif
