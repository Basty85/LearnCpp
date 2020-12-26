#include <bitset>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <vector>
//#define NDEBUG

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

int multiply_function(int num1, int num2);
int divide_function(int num1, int num2);
int add_function(int num1, int num2);
int subtract_function(int num1, int num2);
using pFunc1 = decltype(multiply_function) *;

int main() {

    int (*test)(int, int); // test ist ein pointer auf eine funktion
    test = &multiply_function;
    vector<int (*)(int, int)> worschd2 = {test, &divide_function, add_function, subtract_function}; //vector, der pointer auf eine funktion enthält, welche int zurückgibt und 2x int als parameter aufnimmt

    for (auto &c : worschd2) {
        cout << c(3, 2) << endl;
    }

    return 0;
}

int multiply_function(int num1, int num2) {
    return num1 * num2;
}
int divide_function(int num1, int num2) {
    return num1 / num2;
}
int add_function(int num1, int num2) {
    return num1 + num2;
}
int subtract_function(int num1, int num2) {
    return num1 - num2;
}