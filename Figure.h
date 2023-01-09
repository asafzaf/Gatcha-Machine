#pragma once
#include "Series.h"

// This project made by Asaf Zafrir (205929029)

//---        Figure.h          ---//

class Figure {
protected:
	Series m_theme;

public:
	//---   C'tors & D'tors   ===//
	Figure(Series theme);

	//---  Getters & Setters  ===//
	virtual Series getCategory() = 0;
};

