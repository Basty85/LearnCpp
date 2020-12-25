#include <algorithm>
#include <bitset>
//#define NDEBUG
#include <cassert>
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

string make_plural(size_t ctr, const string &word, const string &ending = "s");

int main(int argc, char *argv[]) {

    int i1 = 1, i2 = 2;

    cout << make_plural(1, "success", "es") << endl;
    cout << make_plural(2, "success", "es") << endl;

    cout << make_plural(1, "failure") << endl;
    cout << make_plural(2, "failure") << endl;

    //assert(i1 < i2);

    cout << "Error: " << __FILE__
         << " : in function " << __func__
         << " at line " << __LINE__ << endl;
    
    return 0;
}

string make_plural(size_t ctr, const string &word, const string &ending) {
    return (ctr > 1) ? word + ending : word;
}