#pragma once
#include "Series.h"

class Figure {
protected:
	Series m_theme;

public:
	Figure();
	virtual ~Figure() = 0;

	Series getCategory() { return m_theme; }
};
