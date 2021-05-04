// NumberMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

#include <ctime>

#include <cmath>

#include <cstdlib>



using namespace std;



int main() {

    int i = 0, j;

    int random;

    double number_matrix[10][10];

    srand(time(0));

    while (i < 5) {

        random = ((0 + rand()) % 10) + 1;

        for (j = 0; j <= i; j++) {

            if (!(random == number_matrix[j][0])) {

                number_matrix[i][0] = random;

                i++;

                break;

            }

        }

    }

    for (i = 0; i < 5; i++) {

        number_matrix[i][1] = (number_matrix[i][0]) * (number_matrix[i][0]);

        number_matrix[i][2] = sqrt(number_matrix[i][0]);

    }

    cout << " ----                                         ---\t\n";

    cout << "|                                            \t|";

    cout << "\n| Rand_Num     Squares     \tSquare_Roots \t|\n";



    for (i = 0; i < 5; i++) {

        cout << "| ";

        for (j = 0; j < 3; j++) {

            cout << number_matrix[i][j] << "\t\t";

        }

        cout << "|\n";

    }

    cout << "|                                            \t|\n";

    cout << " ----                                         ---\n\n";

    return 0;

}