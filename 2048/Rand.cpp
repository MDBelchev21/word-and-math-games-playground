#include <iostream>
#include "Rand.h"
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