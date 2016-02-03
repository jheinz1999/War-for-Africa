// subtractMoney.cpp - Subtracts money from player bank

#include "../Player.hpp"

bool Player::subtractMoney(int amount) {

	if (amount > money) {

	money = 0;
	return 0;

	}

	else {

	money -= amount;
	return 1;

	}

}
