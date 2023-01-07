#pragma once
#include "Rarity.h"
#include "CapsuleType.h"
#include "ShellColor.h"

class Capsule : public ShellColor {
protected:
	string m_name;
	int m_worth;
	Rarity m_rarity;
	CapsuleType* m_type; // really (*) - pointer ?

public:
	Capsule();
	~Capsule();

	virtual float CalculateRarity() = 0;

	CapsuleType* getType() { return m_type; }

	string getName() { return m_name; }
};