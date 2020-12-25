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

using arrS = string[10];


string (&return_reference2arry(string (&vec_s1)[10]))[10]; 
arrS &return_reference2arry2(arrS & vec_s); //ArrT& func1(ArrT& arr);
auto func(string (&vec)[10]) -> string(&)[10];

int main(int argc, char *argv[]) {

    string arr_i[10] = {"abc", "bca", "sda", "abc", "bca", "sda", "abc", "bca", "sda", "bca"};
    
    return_reference2arry(arr_i)[10];

    for (auto &c : arr_i) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}

string (&return_reference2arry(string (&vec_s1)[10]))[10] {

    for (auto &c : vec_s1) {
        for (auto &s : c) {
            s = 'a';
        }
    }


    return vec_s1;
}