#include <iostream>
#include "Capsule.h"

// This project made by Asaf Zafrir (205929029)

//---        Capsule.cpp          ---//

using namespace std;

Capsule::Capsule(string name, Rarity rarity, CapsuleType type, string color) : ShellColor(color) {
	m_name = name;
	m_rarity = rarity;
	m_type = type;
}

float Capsule::CalculateRarity() {
	float sum = 0;
	switch (m_rarity)
	{
	case Common:
		sum = m_worth * 0.25;
		break;
	case Rare:
		sum = m_worth * 0.5;
		break;
	case Epic:
		sum = m_worth;
		break;
	case Legendary:
		sum = m_worth * 1.5;
		break;
	default:
		std::cout << "Err calc" << endl;
		return 0;
		break;
	}
	return sum;
}