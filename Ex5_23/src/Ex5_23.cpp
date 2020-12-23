#include <bitset>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <vector>
#include "functions.h"

using std::begin;
using std::bitset;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::runtime_error;
using std::strcat;
using std::strcpy;
using std::string;
using std::vector;

int main() {

    double i, j, k;

    cout << "Enter two values for division: ";

    try {
        cin >> i >> j;
        if (j == 0)
            throw runtime_error("Divisor mustn't be zero!!");

    } catch (runtime_error err) {
        cout << err.what() << "\nTry again? Enter y or n" << endl;
        char c;
        cin >> c;
        if (c == 'y') {
            cout << "Enter mew value for j: ";
            cin >> j;
            cout << endl;
        }
    }

    k = i / j;

    cout << "The results is: " << k << endl << endl;

    cout << "add(1, 2) = " << add(1, 2) << '\n';


}