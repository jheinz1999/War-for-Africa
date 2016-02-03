// draw.cpp - Draw function for playing game state

#include <SFML/Graphics.hpp>

#include "../PlayingState.hpp"
#include "../../src/Game.hpp"
#include "../Map.hpp"

void PlayingState::draw(sf::RenderWindow &window) {

Game::entityManager.drawAllEntities(window);
Game::gameMap.draw(window);
window.draw(turn);
window.draw(troops);
window.draw(states);
window.draw(money);

} 
