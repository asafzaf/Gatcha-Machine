#pragma once
#include "Series.h"
#include "Capsule.h"

class GatchaMachine {
private:
	Series m_theme;
	int m_capsuleCost;
	Capsule** m_capsules;
	Capsule** m_ExtraCapsules;
public:
	Capsule RollForCapsule(int num);
	int InsertCapsule(Capsule capsule);
};