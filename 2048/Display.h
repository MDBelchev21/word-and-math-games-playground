#pragma once
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

void display(int body[4][4]) {
	cout << setw(65) << "_________________" << endl;
	cout << setw(50) << "| " << body[0][0] << " | " << body[0][1] << " | "
		<< body[0][2] << " | " << body[0][3] << " | " << endl;
	cout << setw(65) << "_________________" << endl;
	cout << setw(50) << "| " << body[1][0] << " | " << body[1][1] << " | "
		<< body[1][2] << " | " << body[1][3] << " | " << endl;
	cout << setw(65) << "_________________" << endl;
	cout << setw(50) << "| " << body[2][0] << " | " << body[2][1] << " | "
		<< body[2][2] << " | " << body[2][3] << " | " << endl;
	cout << setw(65) << "_________________" << endl;
	cout << setw(50) << "| " << body[3][0] << " | " << body[3][1] << " | "
		<< body[3][2] << " | " << body[3][3] << " | " << endl;
	cout << setw(65) << "_________________" << endl;
}