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
	GatchaMachine(Series theme, int cost);
	GatchaMachine(string color, int cost);
	~GatchaMachine();

	//---       Methods       ---//
	Capsule* RollForCapsule();
	void InsertCapsule(Capsule* capsule);

	//---  Getters & Setters  ---//
	Series getTheme() { return m_theme; }
	void setTheme(Series theme) { m_theme = theme; }

	int getCapsuleCost() { return m_capsuleCost; }
	void setCapsuleCost(int cost) { m_capsuleCost = cost; }

	Capsule** getCapsulesArray() { return m_capsules; }
	void setCapsulesArray(Capsule** capsule) { m_capsules = capsule; }

	Capsule** getExtrasArray() { return m_ExtraCapsules; }
	void setExtrasArray(Capsule** capsule) { m_ExtraCapsules = capsule; }

	string getColor() { return m_color; }
};