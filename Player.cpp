#include <iostream>
#include "Player.h"

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
		m_capsulesWon = nullptr;
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

//void Player::PlayMachine() {
//
//}

int Player::CalculatEarning() {
	int result = 0;
	Capsule** tempCapsulesWon = getCapsuleWon();
	for (int i = 0; i < 50; i++) {
		if (tempCapsulesWon != nullptr)
			result += tempCapsulesWon[i]->getWorth();
	}
	return result;
}