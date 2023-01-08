#include "GatchaMachine.h"

// This project made by Asaf Zafrir (205929029)

//---        GatchaMachine.cpp          ---//

GatchaMachine::GatchaMachine() : ShellColor() {
	m_theme = None;
	m_capsuleCost = 0;
	m_capsules = new Capsule * [10];
	m_ExtraCapsules = new Capsule * [10];
	for (int i = 0; i < 10; i++) {
		m_capsules[i] = nullptr;
		m_ExtraCapsules[i] = nullptr;
	}

}

GatchaMachine::GatchaMachine(string color) : ShellColor() {
	m_theme = None;
	m_capsuleCost = 0;
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

// Roll For Capsule //

//int GatchaMachine::InsertCapsule(Capsule cpsule) {
//
//}