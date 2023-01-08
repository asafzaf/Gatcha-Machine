#include <iostream>
#include "Player.h"

using namespace std;

int main() {
	Player* player = new Player();
	cout << player->getName() << " " << player->getMoney() << " " << player->CalculatEarning();
	int main_choice = -1;
	while (main_choice != 0) {
		cin >> main_choice;
		switch (main_choice)
		{
		case 0:
			cout << "Bye!";
			return 0;
		case 1:
			main_choice = -1;
		default:
			break;
		}
	}
}