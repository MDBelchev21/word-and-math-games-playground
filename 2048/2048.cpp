#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <windows.h>
#include <time.h>
#include "Display.h"
#include "Move.h"
#include "Rand.h"
#include "Check.h"
using namespace std;

int main() {
	srand(time(NULL));
	int menuChoice;
	int menuCounter = 1;
	bool instruction = true, isOver;
	int body[4][4] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char move;
	int spawn1x, spawn1y, spawn2x, spawn2y;
	spawn1x = randAssign();
	spawn1y = randAssign();
	spawn2x = randAssign();
	spawn2y = randAssign();
	body[spawn1x][spawn1y] = 2;
	body[spawn2x][spawn2y] = 2;
	system("Color E4");
	while (true) {
		Sleep(1000);
		if (menuCounter == 1)
		{
			menu();
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
				instructions();
			}
			instruction = false;
			cout << endl << "Please enter a move: ";
			cin >> move;
			if (menuCounter != 1) {
				system("cls");
				cout << " Your choice is --> " << menuChoice << endl << endl;
				cout << " Instructions:" << endl;
				cout << " The control keys are:" << endl;
				cout << " a --> left" << endl;
				cout << " d --> right" << endl;
				cout << " w --> up" << endl;
				cout << " s --> down" << endl;
				switch (move)
				{
				case 'w': upMove(body); break;
				case 'a': leftMove(body); break;
				case 's': downMove(body); break;
				case 'd': rightMove(body); break;
				}
				isOver = checkOver(body);
				if (isOver != true)
				{
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
				else
				{
					system("cls");
					cout << "Game Over";
				}
			}
		}
		case 2:
		{
			system("exit");
			break;
		}
		}
	}
}
