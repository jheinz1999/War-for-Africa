#ifndef __PLAYER1_HPP__
#define __PLAYER1_HPP__

#include <vector>

class Player {

	public:

	Player();

	int getMoney();
	int getTroopCount();
	int getStatesOwned();

	void addMoney(int amount);
	bool subtractMoney(int amount);
	
	void addState(int rank);
	void deleteState(int rank);
	
	int calculateIncome();
	int calculateTax();

	void changeTroopCount(int amount);

	bool isDead();

	private:

	int money;
	int troops;
	int boats;
	int stateClasses[6];
	bool living;

};

#endif
