// deleteState.cpp - removes state from player control

#include "../Player.hpp"

void Player::deleteState(int rank) {

stateClasses[rank]--;

	if (getStatesOwned() <= 0)
	living = 0;

}
