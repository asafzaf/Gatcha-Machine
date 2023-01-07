#pragma once
#include <string>
#include "Capsule.h"

using namespace std;

class Player {
private:
	string m_name;
	int m_money;
	Capsule** m_capsulesWon;

public:
	void PlayMachine(GatchaMachine);
	int CalculatEarning();

	string getName() { return m_name; }
	
	int getMoney() { return m_money; }
	void setMoney(int money) { m_money = money; }

	Capsule** getCapsuleWon() { return m_capsulesWon; }
};