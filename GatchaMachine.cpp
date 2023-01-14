#include <iostream>
#include "GatchaMachine.h"

// This project made by Asaf Zafrir (205929029)

//---        GatchaMachine.cpp          ---//

using namespace std;

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
	Capsule* capsule = tempCaps[randNum];
	tempCaps[randNum] = nullptr;
	return capsule;
} 

void GatchaMachine::InsertCapsule(Capsule* capsule) {
	
	capsule->setWorth(getCapsuleCost());

	Capsule** temp = getCapsulesArray();
	int index = 0;
	while (temp[index] != nullptr) {
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
		setExtrasArray(temp);
	}
	else {
		temp[index] = capsule;
		setCapsulesArray(temp);
	}
	
}