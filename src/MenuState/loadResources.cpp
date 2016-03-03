// loadResources.cpp - Loads required resources/unloads unrequired resources

#include <iostream>

#include "../MenuState.hpp"
#include "../../jge/FollowableEntity.hpp"
#include "../Game.hpp"

void MenuState::loadResources() {

jge::AnimatedEntity* rotatingEarth = new jge::AnimatedEntity();

rotatingEarth->setTexture("Graphics/puff.png");
rotatingEarth->getSprite()->setOrigin(0, 0);
rotatingEarth->getSprite()->setPosition(50, 150);
rotatingEarth->setDimensions(80, 80);
rotatingEarth->setUpdateFrequency(0, 10);
rotatingEarth->getSprite()->scale(10, 7.5);

Game::entityManager.addEntity("rotating earth", rotatingEarth);

} 
