#include <iostream>
#include "Player.h"
#include "GatchaMachine.h"

// This project made by Asaf Zafrir (205929029)

//---        Player.cpp          ---//

using namespace std;

Player::Player() {
	cout << "Please enter Name: ";
	string name;
	cin >> name;
	m_name = name;
	cout << "Please enter sum of money that you have: ";
	cin >> m_money;
	m_capsulesWon = new Capsule * [50];
	for (int i = 0; i < 50; i++) {
		m_capsulesWon[i] = nullptr;
	}
	cout << "Player created successfully!" << endl;
}

Player::~Player() {
	m_name.clear();
	for (int i = 0; i < 50; i++) {
		if (m_capsulesWon[i] != nullptr)
			delete m_capsulesWon[i];
	}
	cout << "Player deleted successfully!" << endl;
}

void Player::PlayMachine(GatchaMachine* machine) {
	Capsule** tempArray = machine->getCapsulesArray();
	int counter = 0;
	for (int i = 0; i < 10; i++) {
		if (tempArray[i] == nullptr)
			counter++;
	}
	if (counter == 10) {
		cout << "Empty Machine!" << endl;
		return;
	}
	else {
		Capsule* capsule = machine->RollForCapsule();
		cout << "Got a capsule!" << endl;
		Capsule** capsules_won = getCapsuleWon();
		int index = 0;
		while (capsules_won[index] != nullptr) {
			index++;
		}
		capsules_won[index] = capsule;
		setCapsulesWon(capsules_won);
	}
}

float Player::CalculatEarning() {
	int result_cost = 0;
	float result_worth = 0;
	Capsule** tempCapsulesWon = getCapsuleWon();
	for (int i = 0; i < 50; i++) {
		if (tempCapsulesWon[i] != nullptr) {
			result_cost += tempCapsulesWon[i]->getWorth();
			result_worth += tempCapsulesWon[i]->CalculateRarity();
		}
	}
	return result_worth - result_cost;
}

int Player::PrintANDchooseMachineIndex(GatchaMachine** machines) {
	cout << "**************" << endl
		<< "Machine menu:" << endl
		<< "**************" << endl
		<< "Machine\t\tTheme\t\tPrice per capsule" << endl
		<< "0- Exit" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Machine " << i + 1 << "\t" << TextSeries(machines[i]->getTheme()) << "\t\t\tPrice " << machines[i]->getCapsuleCost() << endl;
	}
	int choice = -1;
	while (choice < 0 || choice > 11) {
		cout << "11- Balance." << endl << "Please choose a machine(0 - for exit) : ";
		cin >> choice;
	}
	return choice;
}

const char* Player::TextSeries(Series series) {
	switch (series)
	{
	case None:
		return "None";
		break;
	case Dragon_Ball_Z:
		return "Dragon Ball Z";
		break;
	case Naruto:
		return "Naruto";
		break;
	case Pokemon:
		return "Pokemon";
		break;
	case Attack_On_Titan:
		return "Attack Of Titan";
		break;
	case Bleach:
		return "Bleach";
		break;
	case Spy_X_Family:
		return "Spy X Family";
		break;
	case Full_Metal_Alchemist:
		return "Full Metal Alcemist";
		break;
	default:
		return "Err";
		break;
	}
}