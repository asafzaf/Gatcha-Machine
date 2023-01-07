#pragma once
#include <string>

using namespace std;

class ShellColor {
protected:
	string m_color;

public:
	ShellColor();
	virtual ~ShellColor() = 0;
	string getColor() { return m_color; }
};