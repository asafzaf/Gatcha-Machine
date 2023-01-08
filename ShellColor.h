#pragma once
#include <string>

// This project made by Asaf Zafrir (205929029)

//---        Shellcolor.h          ---//

using namespace std;

class ShellColor {
protected:
	string m_color;

public:
	//---   C'tors & D'tors   ===//
	ShellColor();
	ShellColor(string color);
	virtual ~ShellColor() = 0;

	//---  Getters & Setters  ===//
	string getColor() { return m_color; }
};