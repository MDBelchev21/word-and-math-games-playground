#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cstdlib>
#include "Display.h"
using namespace std;

void display(int body[4][4]) {

	/* BODY OF THE GAME */
	cout << setw(65) << "---------------------" << endl;
	cout << setw(45) << "|" << setw(4) << body[0][0] << "|" << setw(4) << body[0][1] << "|"
		<< setw(4) << body[0][2] << "|" << setw(4) << body[0][3] << "|" << endl;
	cout << setw(65) << "---------------------" << endl;
	cout << setw(45) << "|" << setw(4) << body[1][0] << "|" << setw(4) << body[1][1] << "|"
		<< setw(4) << body[1][2] << "|" << setw(4) << body[1][3] << "|" << endl;
	cout << setw(65) << "---------------------" << endl;
	cout << setw(45) << "|" << setw(4) << body[2][0] << "|" << setw(4) << body[2][1] << "|"
		<< setw(4) << body[2][2] << "|" << setw(4) << body[2][3] << "|" << endl;
	cout << setw(65) << "---------------------" << endl;
	cout << setw(45) << "|" << setw(4) << body[3][0] << "|" << setw(4) << body[3][1] << "|"
		<< setw(4) << body[3][2] << "|" << setw(4) << body[3][3] << "|" << endl;
	cout << setw(65) << "---------------------" << endl;
}

void menu() {

	cout << endl;

	/* BIG 2048 TEXT */
	cout << "\t||||||||||" << setw(20) << "|||||||||||||"  << setw(13) << "||" << setw(7) << "||" << setw(20) << "|||||||||||" << endl;
	cout << "\t" << setw(10) << "|||" << setw(10) << "|||" << setw(10) << "|||" << setw(20) << "||     ||" << setw(20) << "|||     |||" << endl;
	cout << "\t" << setw(9)  << "|||" << setw(11) << "|||" << setw(10) << "|||" << setw(20) << "||     ||" << setw(20) << "|||     |||" << endl;
	cout << "\t" << setw(8)  << "|||" << setw(12) << "|||" << setw(10) << "|||" << setw(20) << "||     ||" << setw(20) << "|||     |||" << endl;
	cout << "\t" << setw(7)  << "|||" << setw(13) << "|||" << setw(10) << "|||" << setw(20) << "|||||||||" << setw(19) << " |||||||||" << endl;
	cout << "\t" << setw(6)  << "|||" << setw(14) << "|||" << setw(10) << "|||" << setw(20) << "       ||" << setw(20) << "|||     |||" << endl;
	cout << "\t" << setw(5)  << "|||" << setw(15) << "|||" << setw(10) << "|||" << setw(20) << "       ||" << setw(20) << "|||     |||" << endl;
	cout << "\t" << setw(4)  << "|||" << setw(16) << "|||" << setw(10) << "|||" << setw(20) << "       ||" << setw(20) << "|||     |||" << endl;
	cout << "\t" << setw(3)  << "|||" << setw(17) << "|||" << setw(10) << "|||" << setw(20) << "       ||" << setw(20) << "|||     |||" << endl;
	cout << "\t||||||||||" << setw(20) << "|||||||||||||"  << setw(20) << "||" << setw(20) << "|||||||||||" << endl;

	/* MENU AND OPTIONS WITH ADDED SLEEP TIME */
	cout << endl << endl << "\t\t\t\t M";
	cout << "e";
	Sleep(100);
	cout << "n";
	Sleep(100);
	cout << "u";
	cout << ": ";
	Sleep(100);
	cout << endl << "\t\t\t\t 1";
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
	cout << "\t\t\t\t 2";
	Sleep(100);
	cout << ". ";
	Sleep(100);
	cout << "E";
	Sleep(100);
	cout << "x";
	Sleep(100);
	cout << "i";
	Sleep(100);
	cout << "t";
	cout << " g";
	Sleep(100);
	cout << "a";
	Sleep(100);
	cout << "m";
	Sleep(100);
	cout << "e" << endl << " ";
	Sleep(100);
	cout << "\t\t\t\t -";
	Sleep(100);
	cout << "-";
	Sleep(100);
	cout << "> ";
}

void instructions() {

	/* INSTRUCTIONS AND CONTROLS WITH ADDED SLEEP TIME */
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