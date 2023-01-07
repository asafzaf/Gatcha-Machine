#pragma once
#include "Series.h"

// This project made by Asaf Zafrir (205929029)

//---        Figure.h          ---//

class Figure {
protected:
	Series m_theme;

public:
	//---   C'tors & D'tors   ===//
	Figure();
	virtual ~Figure() = 0;

	//---  Getters & Setters  ===//
	Series getCategory() { return m_theme; }
};