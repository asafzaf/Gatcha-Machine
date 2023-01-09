#pragma once
#include <string>

// This project made by Asaf Zafrir (205929029)

//---        Edible.h          ---//

using namespace std;

class Edible {
protected:
	string m_flavor;

public:
	//---   C'tors & D'tors   ---//
	Edible(string flavor);
	virtual ~Edible();

	//---  Getters & Setters  ---//
	virtual string getflavor() = 0;
};