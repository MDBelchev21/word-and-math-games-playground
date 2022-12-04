#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "Display.h"
using namespace std;

int randAssign() {
	int num;
	while (true) {
		num = rand() % 4;
		if (num > -1 && num < 4) {
			break;
		}
	}
	return num;
}

int main() {
	srand(time(0));
	int menuChoice;
	int menuCounter = 1;
	bool instructionCounter = true;
	int body[4][4] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char move;
	int spawn1x, spawn1y, spawn2x, spawn2y;
	spawn1x = randAssign();
	spawn1y = randAssign();
	spawn2x = randAssign();
	spawn2y = randAssign();
	body[spawn1x][spawn1y] = 2;
	body[spawn2x][spawn2y] = 2;
	bool randNum = false;
	while (true) {
		system("Color E4");

		if (menuCounter == 1)
		{
			cout << endl << " Menu:" << endl;
			cout << " 1. Start game" << endl;
			cout << " 2. Exit" << endl << endl << " Your choice is --> ";
			cin >> menuChoice;
		}
		menuCounter += 1;
		switch (menuChoice)
		{
		case 1:
			display(body);

			if (instructionCounter == true)
			{
				cout << " Instructions:" << endl << endl;
				cout << " The control keys are:" << endl;
				cout << " a --> left" << endl;
				cout << " d --> right" << endl;
				cout << " w --> up" << endl;
				cout << " s --> down" << endl << endl;
			}
			instructionCounter = false;
			cout << " Please enter a move:";
			cin >> move;
			if (menuCounter != 1) {
				system("cls");
				cout << " Menu:" << endl;
				cout << " 1. Start game" << endl;
				cout << " 2. Exit" << endl << endl << " Your choice is --> " << menuChoice << endl << endl;
				cout << " Instructions:" << endl << endl;
				cout << " The control keys are:" << endl;
				cout << " a --> left" << endl;
				cout << " d --> right" << endl;
				cout << " w --> up" << endl;
				cout << " s --> down" << endl << endl;
			}

			if (move == 'w') {
				for (int i = 1; i < 4; i++) {
					for (int j = 0; j < 4; j++) {

						if (body[i][j] != 0) {
							body[0][j] = body[i][j];
							body[i][j] = 0;
						}
					}
				}
			}
			else if (move == 'a') {
				for (int i = 0; i < 4; i++) {
					for (int j = 1; j < 4; j++) {
						if (body[i][j] != 0) {
							body[i][0] = body[i][j];
							body[i][j] = 0;
							if (body[i][0] == body[i][j]) {
								body[i][0] += body[i][j];
							}
						}
					}
				}
			}
			else if (move == 's') {
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 4; j++) {
						if (body[i][j] != 0) {
							body[3][j] = body[i][j];
							body[i][j] = 0;
						}
					}
				}
			}
			else if (move == 'd') {
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 3; j++) {
						if (body[i][j] != 0) {
							body[i][3] = body[i][j];
							body[i][j] = 0;
							if (body[i][3] == body[i][j]) {
								body[0][3] += body[i][j];
							}
						}
					}
				}
			}
			while (true) {
				srand(time(0));
				spawn1x = randAssign();
				spawn1y = randAssign();
				if (body[spawn1x][spawn1y] == 0)
				{
					body[spawn1x][spawn1y] = 2;
					break;
				}
			}
		case 2:
			system("exit");
			break;
		default:
			cout << "Not a right number.";
		}
	}
	cout << string('\n', 25);
}