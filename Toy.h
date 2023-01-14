#pragma once
#include "Capsule.h"
#include "Figure.h"

// This project made by Asaf Zafrir (205929029)

//---        Toy.h          ---//

class Toy : public Capsule, public Figure {
public:
	Toy(string name, Rarity rarity, CapsuleType type, Series theme, string color);
	
	//Capsule& operator=(Capsule& capsule);

	int getWorth() { return m_worth; }

	string getColor() { return m_color; }

	Series getCategory() { return m_theme; }

	void fff() { return; }
};
