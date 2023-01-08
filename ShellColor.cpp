#include "ShellColor.h"

// This project made by Asaf Zafrir (205929029)

//---        ShellColor.cpp          ---//

ShellColor::ShellColor() {
	m_color = "None";
}

ShellColor::ShellColor(string color) {
	m_color = color;
}

ShellColor::~ShellColor() {
	m_color.clear();
}