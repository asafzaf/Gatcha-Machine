#pragma once
#include "Series.h"
#include "Capsule.h"

// This project made by Asaf Zafrir (205929029)

//---        GatchaMachine.h          ---//

class GatchaMachine {
private:
	Series m_theme;
	int m_capsuleCost;
	Capsule** m_capsules;
	Capsule** m_ExtraCapsules;
public:
	//---   C'tors & D'tors   ===//
	GatchaMachine();
	~GatchaMachine();

	//---       Methods       ---//
	Capsule RollForCapsule(int num);
	int InsertCapsule(Capsule capsule);

	//---  Getters & Setters  ===//

};