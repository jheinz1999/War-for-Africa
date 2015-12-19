// constructor.cpp

#include "../Game.hpp"
#include "../../jge/jge.hpp"
#include "../Map.hpp"
#include "../PlayingState.hpp"

Game::Game() {

jge::IState* state = new PlayingState();

stateManager.addState("playing", state);
stateManager.setState("playing");

}

bool Game::isMouseDown;
bool Game::isRightDown;
Map Game::gameMap;

