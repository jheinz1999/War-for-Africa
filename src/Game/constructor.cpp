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
jge::Entity* bg = new jge::Entity();

map->setTexture("Graphics/map.png");
bg->setTexture("Graphics/bg.png");

entityManager.addEntity("map", map);
entityManager.addEntity("bg", bg);

keyCode["EXIT"] = sf::Keyboard::Escape;

}

