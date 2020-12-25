#include <algorithm>
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
using std::find;
using std::runtime_error;
using std::strcat;
using std::strcpy;
using std::string;
using std::vector;

int main(int argc, char *argv[]) {

    string s1 = "";

    cout << argc << endl;

    for (auto it = 1; it != argc; ++it) {
        s1 = s1 + argv[it];
    }
    cout << s1 << endl;

    cout << "\n\n";

    for (auto it = 1; it != argc; ++it) {
        cout << argv[it] << " ";
    }
}