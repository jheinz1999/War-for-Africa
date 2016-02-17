// MapPiece.hpp - Definition for Map piece

#ifndef __MAPPIECE_HPP__
#define __MAPPIECE_HPP__

#include <vector>

#include "../jge/Entity.hpp"
#include "Controller.hpp"

class MapPiece : public jge::Entity { // Class for map pieces, inherits from Entity

	public:

	MapPiece();

	Controller getController();

	void setController(Controller controller);

	sf::Color getColor();

	int getTroopCount();

	void changeTroopCount(int amount);

	bool isCoastal;
	
	void setRank(int rank);

	void addAdjacentState(std::string id);

	int getRank();

	bool isMovable();

	void setMovable(bool a);

	std::vector<std::string>* getAdjacentStates();

	private:

	std::vector<std::string> adjacentStates;

	Controller controller;

	sf::Color color;

	int troopCount;

	int rank;

	bool movable;

};

#endif
