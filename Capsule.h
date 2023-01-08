#pragma once
#include "Rarity.h"
#include "CapsuleType.h"
#include "ShellColor.h"

// This project made by Asaf Zafrir (205929029)

//---        Capsule.h          ---//

class Capsule : public ShellColor {
protected:
	string m_name;
	int m_worth;
	Rarity m_rarity;
	CapsuleType m_type; // really (*) - pointer ?

public:
	//---   C'tors & D'tors   ---//
	Capsule(string name, Rarity rarity, CapsuleType type);

	//---       Methods       ---//
	//virtual float CalculateRarity();

	//---  Getters & Setters  ---//
	CapsuleType getType() { return m_type; }

	string getName() { return m_name; }

	int getWorth() { return m_worth; }
};