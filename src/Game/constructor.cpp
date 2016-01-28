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
jge::AnimatedEntity* rotatingEarth = new jge::AnimatedEntity();

bg->setTexture("Graphics/bg.png");
rotatingEarth->setTexture("Graphics/puff.png");

rotatingEarth->getSprite()->setOrigin(0, 0);
rotatingEarth->getSprite()->setPosition(50, 150);
rotatingEarth->setDimensions(80, 80);
rotatingEarth->setUpdateFrequency(0, 10);
rotatingEarth->getSprite()->scale(10, 7.5);

entityManager.addEntity("bg", bg);
entityManager.addEntity("rotating earth", rotatingEarth);

keyCode["EXIT"] = sf::Keyboard::Escape;

}

