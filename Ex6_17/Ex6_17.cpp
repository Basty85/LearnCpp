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
using std::runtime_error;
using std::strcat;
using std::strcpy;
using std::string;
using std::vector;
using std::find;

bool contains_capitals(const string string1);
void change_to_lowercase(string &string1);

int main() {

    string s1;
    bool is_capital;
    string lowercase_s1;
    cout << "Give a string to check for capitals: ";
    getline(cin, s1);
    cout << endl;

    is_capital = contains_capitals(s1);

    if (is_capital)
        cout << "Given string contains capitals" << endl;
    else {
        cout << "Given string does NOT contain capitals" << endl;
    }
    cout << endl;

    change_to_lowercase(s1);
    cout << "s1_lowercase: " << s1 << endl;

}

bool contains_capitals(const string string1) {
    vector<bool> is_capital_vec;
    bool is_capital;
    for (auto &c : string1) {
        is_capital_vec.push_back(isupper(c));
    }
    for (auto it = is_capital_vec.begin(); it != is_capital_vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    if (find(is_capital_vec.begin(), is_capital_vec.end(), true) == is_capital_vec.end()) // gives true only if all elements are false
        is_capital = false;
    else {
        is_capital = true;
    }

    return is_capital;
    //return is_capital;
}

void change_to_lowercase(string &string1) {
    //string temp_string;
    for (auto &c : string1) {
        //temp_string.push_back(tolower(c));
        c = tolower(c);
    }
    cout << "test";
    //string1 = temp_string;  
}