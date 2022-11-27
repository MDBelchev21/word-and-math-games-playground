#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

void display(int body[4][4]) {
    cout << setw(65) << "- - - - - - - - -" << endl;
    cout << setw(50) << "| " << body[0][0] << " | " << body[0][1] << " | "
        << body[0][2] << " | " << body[0][3] << " | " << endl;
    cout << setw(65) << "- - - - - - - - -" << endl;
    cout << setw(50) << "| " << body[1][0] << " | " << body[1][1] << " | "
        << body[1][2] << " | " << body[1][3] << " | " << endl;
    cout << setw(65) << "- - - - - - - - -" << endl;
    cout << setw(50) << "| " << body[2][0] << " | " << body[2][1] << " | "
        << body[2][2] << " | " << body[2][3] << " | " << endl;
    cout << setw(65) << "- - - - - - - - -" << endl;
    cout << setw(50) << "| " << body[3][0] << " | " << body[3][1] << " | "
        << body[3][2] << " | " << body[3][3] << " | " << endl;
    cout << setw(65) << "- - - - - - - - -" << endl;
}

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
    int body[4][4] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    char move;
    int spawn1x, spawn1y, spawn2x,spawn2y;
    spawn1x = randAssign();
    spawn1y = randAssign();
    spawn2x = randAssign();
    spawn2y = randAssign();
    body[spawn1x][spawn1y] = 2;
    body[spawn2x][spawn2y] = 2;
    bool randNum = false;
    while (true) {
        display(body);
        cout << "Please enter a move:";
        cin >> move;
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
    }
    cout << string('\n', 25);
}