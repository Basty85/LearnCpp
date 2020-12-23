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

    vector<string> vec_s1;
    string s1;
    int cnt = 1;

    while (cin >> s1) {
        vec_s1.push_back(s1);
    }

    for (auto it = vec_s1.begin(); it != vec_s1.end(); ++it) {
        if (*it == *(it + 1))
            ++cnt;
        else {
            if (cnt > 1) {
                cout << *it << " occured " << cnt << " times." << endl;
                cnt = 1;
            }
        }
    }

    //Ex5_19
    /*
    string s1;
    string s2;

    do {
        cout << "Insert two strings: ";
        cin >> s1 >> s2;
        cout << endl;

        if (s1 > s2)
            cout << "s1 greater s2";
        else
            cout << "s2 greater s1";

        cout << "\n\n";

    } while (cin;
    */

}