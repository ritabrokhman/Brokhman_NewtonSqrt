// brokhman_NewtonSqrt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    int iter;
    double num, answer;
    answer = 1;
    char user;
    user = 'z';
    do {
        answer = 1;
        cout << "Number of Iterations: \n";
        cin >> iter;
        cout << "Number to Square Root: \n";
        cin >> num;
        if (iter == 0 || iter < 0 || num == 0 || num < 0) {
            cout << "Try again dumbass \n";
            cout << "\nEnter 'z' to stop or another character to re-run: ";
            cin >> user;
        }

        else {
            for (int i = 0; i < iter; i++) {
                answer = .5 * (answer + num / answer);
            }

            cout << "After " << iter << " iterations, the approximate square root of "
                << num << " is " << answer;

            cout << "\nEnter 'z' to stop or another character to re-run: ";
            cin >> user;
        }
    } while (user != 'z');
}
