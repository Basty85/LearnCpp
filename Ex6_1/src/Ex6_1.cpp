#include "Chapter6.h"
#include <bitset>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <vector>

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

    int inp_user;
    int result;
    int abs_number;

    cout << "Enter number to fact: ";
    cin >> inp_user;
    cout << endl;

    result = factorial_function(inp_user);
    abs_number = abs_function(-24);

    cout << "Result is: " << result << endl;
    cout << "Abs is: " << abs_number << endl;

    for (size_t it = 0; it != 15; ++it) {
        cout << counter_function() << endl;
    }
    cout << "\n\n";

    int value1 = 5;
    int value2 = 10;

    cout << value1 << " " << value2 << endl;
    swap_function(&value1, &value2);
    cout << value1 << " " << value2 << endl;
}

int abs_function(int number) {
    return abs(number);
}

int counter_function() {
    static size_t ctr = 0;
    return ctr++;
}