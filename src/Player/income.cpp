// income.cpp - gives player income

#include "../Player.hpp"

int Player::calculateIncome() {

int amount = stateClasses[0] * 5 + stateClasses[1] * 15 + stateClasses[2] * 30;

addMoney(amount);

return amount;

}
