#pragma once
#include "Capsule.h"
#include "Edible.h"

// This project made by Asaf Zafrir (205929029)

//---        Candy.h          ---//

class Candy : public Capsule , public Edible {
public:
	Candy(string name, Rarity rarity, CapsuleType type, string flavor, string color);

	string getFlavor() { return m_flavor; }
};