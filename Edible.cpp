#include "Edible.h"

// This project made by Asaf Zafrir (205929029)

//---        Edible.cpp          ---//

Edible::Edible(string flavor) {
	m_flavor = flavor;
}

Edible::~Edible() {
	m_flavor.clear();
}