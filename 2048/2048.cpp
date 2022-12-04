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
	srand(time(NULL));
	int menuChoice;
	int menuCounter = 1;
	bool instruction = true, isFree = false, find = false;
	int body[4][4] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },temp;
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
		{
			display(body);

			if (instruction == true)
			{
				cout << " Instructions:" << endl << endl;
				cout << " The control keys are:" << endl;
				cout << " a --> left" << endl;
				cout << " d --> right" << endl;
				cout << " w --> up" << endl;
				cout << " s --> down" << endl << endl;
			}

			instruction = false;
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
				if (move == 'w') {
					for (int i = 1; i < 4; i++) {
						for (int j = 0; j < 4; j++) {
							if (body[i][j] != 0) {
								for (int l = i - 1; l > -1; l--) {
									if (body[l][j] == body[i][j]) {
										find = true;
										for (int m = i; m < l; m--)
										{
											if (body[m][j] == 0)
											{
												isFree = true;
											}
										}
										if (isFree == true)
										{
											for (int k = 0; k <= i; k++)
											{
												if (body[k][j] == 0)
												{
													temp = k;
													break;
												}
											}
											body[temp][j] = body[l][j] + body[i][j];
											body[l][j] = 0;
											body[i][j] = 0;
											isFree = false;
										}
									}
								}
								if (find = false) {
									for (int k = 0; k <= i; k++){
										if (body[k][j] == 0){
											temp = k;
											break;
										}
									}
									body[temp][j] = body[i][j];
								}
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
					while (true) {
						srand(time(NULL));
						spawn1x = randAssign();
						spawn1y = randAssign();
						if (body[spawn1x][spawn1y] == 0)
						{
							body[spawn1x][spawn1y] = 2;
							break;
						}
					}
				}
			}
		}
		case 2:
		{
			system("exit");
			break;
		}
		default:
		{
			cout << "Not a right number.";
		}
		}
	}
}
