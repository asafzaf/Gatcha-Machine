#include "Capsule.h"

// This project made by Asaf Zafrir (205929029)

//---        Capsule.cpp          ---//

Capsule::Capsule(string name, Rarity rarity, CapsuleType type, string color) : ShellColor(color) {
	m_name = name;
	m_rarity = rarity;
	m_type = type;
}