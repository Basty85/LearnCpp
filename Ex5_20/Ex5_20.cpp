#include <bitset>
#include <cstring>
#include <iostream>
#include <vector>

using std::begin;
using std::bitset;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::strcat;
using std::strcpy;
using std::string;
using std::vector;

int main() {

    string s1 = {""};
    string pre_s1 = {""};
    bool brk = false;

    while (cin >> s1) {
        if (pre_s1 != s1 || !isupper(s1[0])) {
            if (pre_s1 == "") {
                cout << "1st round or pre is empty" << endl;
            } else {
                cout << "No repetition or no uppercase letter" << endl;
            }
        } else {
            break;
        }
        pre_s1 = s1;
    }

    cout << s1 << " duplicated!" << endl;
}