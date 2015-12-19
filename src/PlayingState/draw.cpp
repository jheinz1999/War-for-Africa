// draw.cpp - Draw function for playing game state

#include <SFML/Graphics.hpp>

#include "../PlayingState.hpp"
#include "../../src/Game.hpp"

void PlayingState::draw(sf::RenderWindow &window) {

Game::entityManager.drawAllEntities(window);

} 
