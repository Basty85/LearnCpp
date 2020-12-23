#include <cstring>
#include <iostream>
#include <vector>
#include <bitset>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::strcat;
using std::strcpy;
using std::string;
using std::vector;
using std::bitset;

int main() {

    int i = 2;
    double d = 3.5;
    const string *ps;
    char *pc;
    void *pv;

    i = i * static_cast<int>(d);

    cout << i << endl;

    //Ex4_37
    pv = static_cast<void*>(const_cast<string*>(ps));

    i = static_cast<int>(*pc);

    pv = static_cast<void*>(&d);

    pc = reinterpret_cast<char*>(pv);

}