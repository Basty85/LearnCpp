#include <algorithm>
#include <bitset>
#include <cstring>
#include <initializer_list>
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
using std::initializer_list;
using std::runtime_error;
using std::strcat;
using std::strcpy;
using std::string;
using std::vector;

void calc_sum(initializer_list<int> lst1);

int main(int argc, char *argv[]) {
    int val = 0;
    
    calc_sum({3, 5, 7, 5, 3});

    return 0;
}

void calc_sum(initializer_list<int> lst1) {
    int sum = 0;
    for (auto c : lst1) {
        sum += c;
    }
    cout << sum << endl;
}