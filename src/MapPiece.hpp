// MapPiece.hpp - Definition for Map piece

#ifndef __MAPPIECE_HPP__
#define __MAPPIECE_HPP__

#include "../jge/Entity.hpp"
#include "Controller.hpp"

class MapPiece : public jge::Entity { // Class for map pieces, inherits from Entity

	public:

	MapPiece();

	Controller getController();

	void setController(Controller controller);

	sf::Color getColor();

	private:

	Controller controller;

	sf::Color color;

};

#endif
