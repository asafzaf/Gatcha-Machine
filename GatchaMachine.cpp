#include <iostream>
#include "GatchaMachine.h"

// This project made by Asaf Zafrir (205929029)

//---        GatchaMachine.cpp          ---//


GatchaMachine::GatchaMachine(Series theme, int cost) : ShellColor() {
	m_theme = theme;
	m_capsuleCost = cost;
	m_capsules = new Capsule * [10];
	m_ExtraCapsules = new Capsule * [10];
	for (int i = 0; i < 10; i++) {
		m_capsules[i] = nullptr;
		m_ExtraCapsules[i] = nullptr;
	}
}

GatchaMachine::GatchaMachine(string color, int cost) : ShellColor(color) {
	m_theme = None;
	m_capsuleCost = cost;
	m_capsules = new Capsule * [10];
	m_ExtraCapsules = new Capsule * [10];
	for (int i = 0; i < 10; i++) {
		m_capsules[i] = nullptr;
		m_ExtraCapsules[i] = nullptr;
	}
	m_color = color;
}

GatchaMachine::~GatchaMachine() {
	for (int i = 0; i < 10; i++) {
		if (m_capsules[i] != nullptr)
			delete m_capsules[i];
		if (m_ExtraCapsules[i] != nullptr)
			delete m_ExtraCapsules[i];
	}
	delete[] m_capsules;
	delete[] m_ExtraCapsules;
}

Capsule* GatchaMachine::RollForCapsule() {
	srand(time(nullptr));
	int randNum = rand() % 9;
	Capsule** tempCaps = getCapsulesArray();
	while (tempCaps[randNum] == nullptr) {
		randNum = rand() % 9;
	}
	return tempCaps[randNum];
} 

void GatchaMachine::InsertCapsule(Capsule* capsule) {
	int machine_cost = getCapsuleCost();
	switch (capsule->getRarity())
	{
	case Common:
		capsule->setWorth(machine_cost / 4);
		break;
	case Rare:
		capsule->setWorth(machine_cost / 2);
		break;
	case Epic:
		capsule->setWorth(machine_cost);
		break;
	case Legendary:
		capsule->setWorth(machine_cost + (machine_cost/2) );
		break;
	default:
		break;
	}
	Capsule** temp = getCapsulesArray();
	int index = 0;
	while (temp[index] == nullptr) {
		index++;
	}
	if (index == 9) {
		temp = getExtrasArray();
		index = 0;
		while (temp[index] == nullptr)
		{
			index++;
		}
		temp[index] = capsule;
	}
	else {
		temp[index] = capsule;
	}
}