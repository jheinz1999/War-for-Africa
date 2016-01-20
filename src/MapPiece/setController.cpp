// setController.cpp - Sets controller of piece

#include "../MapPiece.hpp"
#include "../Controller.hpp"
#include "../Game.hpp"

void MapPiece::setController(Controller controller) {

this->controller = controller;

	switch (controller) {

		case Controller::Player1 :

		color = Game::gameMap.team1;

		break;

		case Controller::Player2 :

		color = Game::gameMap.team2;

		break;

		case Controller::Player3 :

		color = Game::gameMap.team3;

		break;

		case Controller::Player4 :

		color = Game::gameMap.team4;

		break;

	}

}
