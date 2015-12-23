// constructor.cpp

#include <SFML/Graphics.hpp>
#include <iostream>

#include "../Game.hpp"
#include "../../jge/jge.hpp"
#include "../Map.hpp"
#include "../PlayingState.hpp"
#include "../MenuState.hpp"

Map Game::gameMap;

Game::Game() {

jge::IState* pState = new PlayingState();
jge::IState* mState = new MenuState();

stateManager.addState("playing", pState);
stateManager.addState("menu", mState);
stateManager.setState("menu");

jge::Entity* map = new jge::Entity();

map->setTexture("Graphics/map.png");

entityManager.addEntity("map", map);

}

