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
	~ShellColor();

	//---  Getters & Setters  ===//
	virtual string getColor() = 0;

};