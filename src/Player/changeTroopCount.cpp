#include "../Player.hpp"

void Player::changeTroopCount(int amount) {

troops += amount;

	if (troops <= 0)
	living = 0;

}
