// income.cpp - gives player income

#include "../Player.hpp"

int Player::calculateIncome() {

int amount = stateClasses[1] * 5 + stateClasses[2] * 10 + stateClasses[3] * 17.5 + stateClasses[4] * 25 + stateClasses[5] * 50;

addMoney(amount);

return amount;

}
