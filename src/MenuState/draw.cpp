// draw.cpp - Draw function for playing game state

#include <SFML/Graphics.hpp>

#include "../MenuState.hpp"
#include "../Game.hpp"
#include "../../jge/AnimatedEntity.hpp"

void MenuState::draw(sf::RenderWindow &window) {

Game::entityManager.getEntity("rotating earth")->draw(window);

} 
