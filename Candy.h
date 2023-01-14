#pragma once
#include "Capsule.h"
#include "Edible.h"

// This project made by Asaf Zafrir (205929029)

//---        Candy.h          ---//

class Candy : public Capsule , public Edible {
public:
	Candy(string name, Rarity rarity, CapsuleType type, string flavor, string color);
	
	//Capsule& operator=(Capsule& capsule);

	int getWorth() { return m_worth; }

	string getFlavor() { return m_flavor; }

	string getColor() { return m_color; }
	
	void fff() { return; }

};