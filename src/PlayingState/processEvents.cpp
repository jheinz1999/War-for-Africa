// processEvents.cpp

#include "../PlayingState.hpp"

void PlayingState::processEvents(sf::RenderWindow &window, sf::Event event) {

	if (event.type == sf::Event::Closed)
	window.close();

} 
