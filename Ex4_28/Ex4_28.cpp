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

    cout << "bool: " << sizeof(bool) << endl;

    cout << "char: " << sizeof(char) << endl;

    cout << "wchar_t: " << sizeof(wchar_t) << endl;

    cout << "char16_t: " << sizeof(char16_t) << endl;

    cout << "char32_t: " << sizeof(char32_t) << endl;

    cout << "short: " << sizeof(short) << endl;

    cout << "int: " << sizeof(int) << endl;

    cout << "long: " << sizeof(long) << endl;

    cout << "long long: " << sizeof(long long) << endl;

    cout << "float: " << sizeof(float) << endl;

    cout << "double: " << sizeof(double) << endl;

    cout << "long double: " << sizeof(long double) << endl << endl;

    int x[10] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int *p = &x[0];

    cout << x+1 << " " << *x << " " << &x[0] << endl;
    cout << sizeof(x) << " " << sizeof(*x) << endl;
    cout << sizeof(x)/sizeof(*x) << endl << endl;

    cout << sizeof(p)/sizeof(*p) << endl << endl;

    cout << sizeof(p) << " " << sizeof(*p) << endl << endl;


    vector<int> ivec = {0, 5, 3, 6, 8,};
    vector<int>::size_type cnt = ivec.size();

    for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt) {
        ivec[ix] = cnt;
    }

    for (auto &c : ivec) {
        cout << c << " ";
    }

}