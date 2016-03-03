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

jge::Entity* bg = new jge::Entity();
jge::Entity* notbar = new jge::Entity();

bg->setTexture("Graphics/bg.png");
notbar->setTexture("Graphics/notbar.png");

notbar->getSprite()->setOrigin(0, 0);

entityManager.addEntity("bg", bg);
entityManager.addEntity("notbar", notbar);

keyCode["EXIT"] = sf::Keyboard::Escape;

}

