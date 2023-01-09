#include <iostream>
#include <vector>
#include "Player.h"
#include "GatchaMachine.h"
#include "Toy.h"
#include "Candy.h"

using namespace std;

void SortCapsulesToMachines(Capsule** list);
GatchaMachine** makeGatchaMachines();
//Capsule** makeCapsulesArray();

int main() {
	Player* player = new Player();
	
	GatchaMachine** Machines = makeGatchaMachines();


	cout << player->getName() << " " << player->getMoney() << " " << player->CalculatEarning();
	int main_choice = -1;
	while (main_choice != 0) {
		int chioce = player->PrintANDchooseMachineIndex(Machines);
		switch (main_choice)
		{
		case 0:
			cout << "Bye!";
			return 0;
		case 1:
			//Machines[1]->RollForCapsule();
			main_choice = -1;
		default:
			break;
		}
	}
}

void SortCapsulesToMachines(Capsule** list) {

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

//Capsule** makeCapsulesArray() {
//	vector** temp = new Capsule * [50];
//	temp[0] = new Toy("bobo", Common, 1, Dragon_Ball_Z, "Red");
//}