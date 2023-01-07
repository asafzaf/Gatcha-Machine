#pragma once
#include <string>

class Edible {
protected:
	string m_flavor;

public:
	Edible();
	virtual ~Edible() = 0;

	string getflavor() { return m_flavor; }
};