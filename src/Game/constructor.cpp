// constructor.cpp

#include <SFML/Graphics.hpp>

#include "../Game.hpp"
#include "../../jge/jge.hpp"
#include "../Map.hpp"
#include "../PlayingState.hpp"

Map Game::gameMap;

Game::Game() {

jge::IState* state = new PlayingState();

stateManager.addState("playing", state);
stateManager.setState("playing");

jge::Entity* map = new jge::Entity();

map->setTexture("Graphics/map.png");

entityManager.addEntity("map", map);

scaleImages();

}

