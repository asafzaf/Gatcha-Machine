#pragma once
#include "Rarity.h"
#include "CapsuleType.h"
#include "ShellColor.h"
#include <string>

// This project made by Asaf Zafrir (205929029)

//---        Capsule.h          ---//

using namespace std;

class Capsule : public ShellColor {
protected:
	string m_name;
	int m_worth;
	Rarity m_rarity;
	CapsuleType m_type;

public:
	//---   C'tors & D'tors   ---//
	Capsule(string name, Rarity rarity, CapsuleType type, string color);

	//virtual Capsule& operator=(Capsule& capsule)=0;

	//---       Methods       ---//
	float CalculateRarity();

	//---  Getters & Setters  ---//
	string getName() { return m_name; }

	CapsuleType getType() { return m_type; }

	Rarity getRarity() { return m_rarity; }
	
	string getColor() { return m_color; }

	int getWorth() { return m_worth; }
	void setWorth(int worth) { m_worth = worth; }

	virtual void fff() = 0;
};
