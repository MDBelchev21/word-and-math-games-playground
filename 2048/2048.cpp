#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <time.h>
#include "Display.h"
#include "Move.h"
#include "Rand.h"
using namespace std;

int main() {
	srand(time(NULL));
	int menuChoice;
	int menuCounter = 1;
	bool instruction = true;
	int body[4][4] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char move;
	int spawn1x, spawn1y, spawn2x, spawn2y;
	spawn1x = randAssign();
	spawn1y = randAssign();
	spawn2x = randAssign();
	spawn2y = randAssign();
	body[spawn1x][spawn1y] = 2;
	body[spawn2x][spawn2y] = 2;
	while (true) {
		system("Color E4");

		Sleep(1000);
		if (menuCounter == 1)
		{
			cout << endl << " M";
			cout << "e";
			Sleep(100);
			cout << "n";
			Sleep(100);
			cout << "u";
			cout << ": ";
			Sleep(100);
			cout << endl << " 1";
			cout << ". ";
			Sleep(100);
			cout << "S";
			Sleep(100);
			cout << "t";
			Sleep(100);
			cout << "a";
			Sleep(100);
			cout << "r";
			Sleep(100);
			cout << "t ";
			Sleep(100);
			cout << "g";
			Sleep(100);
			cout << "a";
			Sleep(100);
			cout << "m";
			Sleep(100);
			cout << "e" << endl;
			Sleep(100);
			cout << " 2";
			Sleep(100);
			cout << ". ";
			Sleep(100);
			cout << "E";
			Sleep(100);
			cout << "x";
			Sleep(100);
			cout << "i";
			Sleep(100);
			cout << "t" << endl << " ";
			Sleep(100);
			cout << "-";
			Sleep(100);
			cout << "-";
			Sleep(100);
			cout << "> ";

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
				Sleep(50);
				cout << " I";
				Sleep(50);
				cout << "n";
				Sleep(50);
				cout << "s";
				Sleep(50);
				cout << "t";
				Sleep(50);
				cout << "r";
				Sleep(50);
				cout << "u";
				Sleep(50);
				cout << "c";
				Sleep(50);
				cout << "t";
				Sleep(50);
				cout << "i";
				Sleep(50);
				cout << "o";
				Sleep(50);
				cout << "n";
				Sleep(50);
				cout << "s";
				Sleep(50);
				cout << endl << endl;
				Sleep(300);
				cout << " T";
				Sleep(100);
				cout << "h";
				Sleep(100);
				cout << "e ";
				Sleep(100);
				cout << "c";
				Sleep(100);
				cout << "o";
				Sleep(100);
				cout << "n";
				Sleep(100);
				cout << "t";
				Sleep(100);
				cout << "r";
				Sleep(100);
				cout << "o";
				Sleep(100);
				cout << "l ";
				Sleep(100);
				cout << "k";
				Sleep(100);
				cout << "e";
				Sleep(100);
				cout << "y";
				Sleep(100);
				cout << "s ";
				Sleep(100);
				cout << "a";
				Sleep(100);
				cout << "r";
				Sleep(100);
				cout << "e: " << endl;
				Sleep(500);
				cout << " a ";
				Sleep(100);
				cout << "-";
				Sleep(100);
				cout << "-";
				Sleep(100);
				cout << "> ";
				Sleep(100);
				cout << "l";
				Sleep(100);
				cout << "e";
				Sleep(100);
				cout << "f";
				Sleep(100);
				cout << "t " << endl;
				Sleep(100);
				cout << " d ";
				Sleep(100);
				cout << "-";
				Sleep(100);
				cout << "-";
				Sleep(100);
				cout << "> ";
				Sleep(100);
				cout << "r";
				Sleep(100);
				cout << "i";
				Sleep(100);
				cout << "g";
				Sleep(100);
				cout << "h";
				Sleep(100);
				cout << "t" << endl;;
				Sleep(100);
				cout << " w ";
				Sleep(100);
				cout << "-";
				Sleep(100);
				cout << "-";
				Sleep(100);
				cout << ">";
				Sleep(100);
				cout << " u";
				Sleep(100);
				cout << "p" << endl;
				cout << " s ";
				Sleep(100);
				cout << "-";
				Sleep(100);
				cout << "-";
				Sleep(100);
				cout << ">";
				Sleep(100);
				cout << " d";
				Sleep(100);
				cout << "o";
				Sleep(100);
				cout << "w";
				Sleep(100);
				cout << "n";
				Sleep(500);
			}
			instruction = false;
			cout << endl << " Please enter a move: ";
			cin >> move;
			if (menuCounter != 1) {
				system("cls");
				cout << " Menu:" << endl;
				cout << " 1. Start game" << endl;
				cout << " 2. Exit" << endl << endl << " Your choice is --> " << menuChoice << endl << endl;
				cout << " Instructions:" << endl;
				cout << " The control keys are:" << endl;
				cout << " a --> left" << endl;
				cout << " d --> right" << endl;
				cout << " w --> up" << endl;
				cout << " s --> down" << endl << endl;
				switch (move)
				{
				case 'w': upMove(body); break;
				case 'a': leftMove(body); break;
				case 's': downMove(body); break;
				case 'd': rightMove(body); break;
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
		case 2:
		{
			system("exit");
			break;
		}
		}
	}
}
