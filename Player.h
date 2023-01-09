#pragma once
#include <string>
#include "Capsule.h"
#include "GatchaMachine.h"

// This project made by Asaf Zafrir (205929029)

//---        Player.h          ---//

using namespace std;

class Player {
private:
	string m_name;
	int m_money;
	Capsule** m_capsulesWon;

public:
	//---   C'tors & D'tors   ---//
	Player();
	~Player();

	//---       Methods       ---//
	void PlayMachine(GatchaMachine& machine);
	int CalculatEarning();
	int PrintANDchooseMachineIndex(GatchaMachine** machines);
	const char* TextSeries(Series series);

	//---  Getters & Setters  ---//
	string getName() { return m_name; }
	
	int getMoney() { return m_money; }
	void setMoney(int money) { m_money = money; }

	Capsule** getCapsuleWon() { return m_capsulesWon; }
};