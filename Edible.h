#pragma once
#include <string>

// This project made by Asaf Zafrir (205929029)

//---        Edible.h          ---//

class Edible {
protected:
	string m_flavor;

public:
	//---   C'tors & D'tors   ===//
	Edible();
	virtual ~Edible() = 0;

	//---  Getters & Setters  ===//
	string getflavor() { return m_flavor; }
};