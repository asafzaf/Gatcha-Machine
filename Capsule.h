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
	CapsuleType* m_type; // really (*) - pointer ?

public:
	//---   C'tors & D'tors   ---//
	Capsule();
	virtual ~Capsule() = 0;

	//---       Methods       ---//
	virtual float CalculateRarity() = 0;

	//---  Getters & Setters  ---//
	CapsuleType* getType() { return m_type; }

	string getName() { return m_name; }
};