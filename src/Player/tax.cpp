// tax.cpp - taxes player

#include "../Player.hpp"

int Player::calculateTax() {

int amount = troops * 3;

	if (!subtractMoney(amount))
	return 0;

return amount;

}
