#pragma once
#include "Series.h"
#include "Capsule.h"

// This project made by Asaf Zafrir (205929029)

//---        GatchaMachine.h          ---//

class GatchaMachine : public ShellColor {
private:
	Series m_theme;
	int m_capsuleCost;
	Capsule** m_capsules;
	Capsule** m_ExtraCapsules;
public:
	//---   C'tors & D'tors   ---//
	GatchaMachine();
	GatchaMachine(string color);
	~GatchaMachine();

	//---       Methods       ---//
	Capsule RollForCapsule(int num);
	int InsertCapsule(Capsule capsule);

	//---  Getters & Setters  ---//
	Series getTheme() { return m_theme; }
	void setTheme(Series theme) { m_theme = theme; }

	int getCapsuleCost() { return m_capsuleCost; }
	void setCapsuleCost(int cost) { m_capsuleCost = cost; }

	Capsule** getCapsulesArray() { return m_capsules; }

	Capsule** getExtrasArray() { return m_ExtraCapsules; }
};