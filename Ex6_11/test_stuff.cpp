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

char &get_val(string &str, string::size_type ix) {
    return str[ix];
}

int main() {
    
    string s("a value");
    cout << s << endl;
    get_val(s,0) = 'A';
    cout << s << endl;

    return 0;
}