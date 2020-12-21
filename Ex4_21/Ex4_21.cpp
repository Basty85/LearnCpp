#include <cstring>
#include <iostream>
#include <vector>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::strcat;
using std::strcpy;
using std::string;
using std::vector;

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

    return 0;
}