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

    vector<int> vec1 = {2, 4, 5, 6, 89, 6};

    for (int &i : vec1) {
        (i % 2) == 1 ? i *= 2 : i;
        cout << i << " ";
    }
    cout << endl;


    //Ex4_22
    int grade = 59;
    string finalgrade = "";

    finalgrade = (grade > 90) ? "high pass"
                              : (grade > 75) ? "pass"
                                             : (grade > 60) ? "low pass" : "fail";

    if (grade > 90)
        finalgrade = "high pass";
    else if (grade > 75)
        finalgrade = "pass";
    else if (grade > 60)
        finalgrade = "low pass";
    else
        finalgrade = "fail";

    cout << finalgrade << endl;

    string s = "word";
    string p1 = s + (s[s.size()-1] == 's' ? "" : "s");

    cout << p1 << endl;

    unsigned long ul1 = 0b00000011;
    unsigned long ul2 = 0b00000111;

    unsigned long ul3 = ul1 & ul2;
    ul3 = ul1 | ul2;
    ul3 = ul1 && ul2;
    ul3 = ul1 || ul2;
    ul3 = ~ul3;
    
    bitset<64> y(ul3);
    cout << sizeof(ul3) << " " << y << '\n';

    cout << ul1 << " " << ul2 << " " << ul3 << endl; 

    return 0;
}