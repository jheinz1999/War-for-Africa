// constructor.cpp - MapPiece constructor

#include "../MapPiece.hpp"
#include "../Controller.hpp"
#include "../Game.hpp"

MapPiece::MapPiece() {

controller = Controller::Unclaimed;
color = Game::gameMap.unclaimed;

}
