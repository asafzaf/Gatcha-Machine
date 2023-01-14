#include <iostream>
#include <vector>
#include "Player.h"
#include "GatchaMachine.h"
#include "Toy.h"
#include "Candy.h"

using namespace std;

void SortCapsulesToMachines(Capsule** capsuleArray, GatchaMachine** MachineArray);
GatchaMachine** makeGatchaMachines();
Capsule** makeCapsulesArray();

int main() {
	Player* player = new Player();
	
	GatchaMachine** Machines = makeGatchaMachines();
	Capsule** Capsules = makeCapsulesArray();

	SortCapsulesToMachines(Capsules, Machines);

	int main_choice = -1;
	while (main_choice != 0) {
		int main_choice = player->PrintANDchooseMachineIndex(Machines);
		switch (main_choice)
		{
		case 0:
			cout << "Bye!";
			return 0;
		case 1:
			player->PlayMachine(Machines[0]);
			main_choice = -1;
			break;
		case 2:
			player->PlayMachine(Machines[1]);
			main_choice = -1;
			break;
		case 3:
			player->PlayMachine(Machines[2]);
			main_choice = -1;
			break;
		case 4:
			player->PlayMachine(Machines[3]);
			main_choice = -1;
			break;
		case 5:
			player->PlayMachine(Machines[4]);
			main_choice = -1;
			break;
		case 6:
			player->PlayMachine(Machines[5]);
			main_choice = -1;
			break;
		case 7:
			player->PlayMachine(Machines[6]);
			main_choice = -1;
			break;
		case 8:
			player->PlayMachine(Machines[7]);
			main_choice = -1;
			break;
		case 9:
			player->PlayMachine(Machines[8]);
			main_choice = -1;
			break;
		case 10:
			player->PlayMachine(Machines[9]);
			main_choice = -1;
			break;
		case 11:
			cout << "****************************" << endl
				<< "Your balance is " << player->CalculatEarning() << endl
				<< "****************************" << endl;
		default:
			break;
		}
	}
}

void SortCapsulesToMachines(Capsule** capsuleArray, GatchaMachine** MachineArray) {
	int rarity_sum[4] = {0};
	Series series = None;
	string color;
	Toy* temp;
	for (int i = 0; i < 50; i++) {
		if (capsuleArray[i] == nullptr) {
			break;
		}
		else switch (capsuleArray[i]->getType())
		{
		case T_Toy:
			temp = dynamic_cast<Toy*>(capsuleArray[i]);
			series = temp->getCategory();
			for (int j = 0; j < 10; j++) {
				if (MachineArray[j]->getTheme() == series) {
					MachineArray[j]->InsertCapsule(capsuleArray[i]);
					break;
				}
			}
			break;
		case T_Candy:
			color = capsuleArray[i]->getColor();
			for (int j = 0; j < 10; j++) {
				if (MachineArray[j]->getColor() == color && MachineArray[j]->getTheme() == None) {
					MachineArray[j]->InsertCapsule(capsuleArray[i]);
					break;
				}
			}
			break;
		default:
			cout << "Err (not candy or toy)." << endl;
			break;
		}
	}
}

GatchaMachine** makeGatchaMachines() {
	GatchaMachine** temp = new GatchaMachine * [10];
	temp[0] = new GatchaMachine(Dragon_Ball_Z, 5);
	temp[1] = new GatchaMachine(Naruto, 7);
	temp[2] = new GatchaMachine(Pokemon, 10);
	temp[3] = new GatchaMachine(Attack_On_Titan, 3);
	temp[4] = new GatchaMachine(Bleach, 4);
	temp[5] = new GatchaMachine(Spy_X_Family,2);
	temp[6] = new GatchaMachine(Full_Metal_Alchemist, 6);
	temp[7] = new GatchaMachine("Blue", 8);
	temp[8] = new GatchaMachine("Purple", 7);
	temp[9] = new GatchaMachine("Red", 5);

	return temp;
}

Capsule** makeCapsulesArray() {	
	Capsule** temp = new Capsule * [50];
	for (int i = 0; i < 50; i++) {
		temp[i] = nullptr;
	}
	temp[0] = new Toy("bobo", Common, T_Toy, Dragon_Ball_Z, "Blue");
	temp[1] = new Candy("fc", Rare, T_Candy, "sweet", "Red");
	temp[2] = new Toy("pj", Legendary, T_Toy, Full_Metal_Alchemist, "Red");
	temp[3] = new Toy("dab", Epic, T_Toy, Naruto, "Purple");
	temp[4] = new Toy("rea", Common, T_Toy, Dragon_Ball_Z, "Red");
	temp[5] = new Toy("bobo", Legendary, T_Toy, Attack_On_Titan, "Red");
	temp[6] = new Candy("lil", Rare, T_Candy, "sour", "Red");
	temp[7] = new Candy("mk", Rare, T_Candy, "sweet", "Blue");
	temp[8] = new Candy("yuc", Rare, T_Candy, "sour", "Red");
	temp[9] = new Candy("you", Rare, T_Candy, "sweet", "Red");
	temp[10] = new Candy("rar", Legendary, T_Candy, "sour", "Purple");
	temp[11] = new Toy("bo", Epic, T_Toy, Bleach, "Red");
	temp[12] = new Toy("lk", Common, T_Toy, Dragon_Ball_Z, "Red");
	temp[13] = new Toy("cab", Common, T_Toy, Bleach, "Purple");
	temp[14] = new Candy("l", Rare, T_Candy, "sour", "Purple");
	temp[15] = new Candy("omk", Common, T_Candy, "sour", "Blue");
	temp[16] = new Toy("ub", Common, T_Toy, Dragon_Ball_Z, "Red");
	temp[17] = new Toy("wii", Epic, T_Toy, Dragon_Ball_Z, "Blue");
	temp[18] = new Candy("waa", Legendary, T_Candy, "sweet", "Purple");
	temp[19] = new Toy("wuu", Common, T_Toy, Dragon_Ball_Z, "Red");

	return temp;
}