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

void f() {
    cout << "Without arguments!" << endl;
}
void f(int){
    cout << "1x int" << endl;
}
void f(int, int){
    cout << "2x int" << endl;
}
void f(double, double = 3.14){
    cout << "2x double" << endl;
}

int main() {
    
    //f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}