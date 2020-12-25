#include <bitset>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <vector>
#define NDEBUG

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

void reset_function(int &reset);
int factorial(int val);

int main() {
    
    int num1 = 15;

    reset_function(num1);

    cout << num1 << endl << endl;

    cout << factorial(5) << endl;

}

void reset_function(int &reset) {
    reset = 0;
}

int factorial(int val) {
    #ifndef NDEBUG
        cout << "test" << endl;
    #endif
    if (val > 1)
        return factorial(val-1) *val;
    return 1;
}