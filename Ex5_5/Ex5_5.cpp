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

    const vector<string> scores = {"A++", "A", "B", "C", "D", "E", "F"};

    int numeric_grade_input = 0;

    cout << "Input score: ";
    cin >> numeric_grade_input;
    cout << endl
         << endl
         << "Letter grade: ";

    if (numeric_grade_input == 100) {
        cout << scores[0] << endl;
    } else if (numeric_grade_input >= 90) {
        if (numeric_grade_input < 94) {
            cout << scores[1] + '-' << endl;
        } else if (numeric_grade_input < 97) {
            cout << scores[1] << endl;
        } else {
            cout << scores[1] + '+' << endl;
        }
    } else if (numeric_grade_input >= 80) {
        if (numeric_grade_input < 84) {
            cout << scores[2] + '-' << endl;
        } else if (numeric_grade_input < 87) {
            cout << scores[2] << endl;
        } else {
            cout << scores[2] + '+' << endl;
        }

    } else if (numeric_grade_input >= 70) {
        if (numeric_grade_input < 74) {
            cout << scores[3] + '-' << endl;
        } else if (numeric_grade_input < 77) {
            cout << scores[3] << endl;
        } else {
            cout << scores[3] + '+' << endl;
        }

    } else if (numeric_grade_input >= 60) {
        if (numeric_grade_input < 64) {
            cout << scores[4] + '-' << endl;
        } else if (numeric_grade_input < 67) {
            cout << scores[4] << endl;
        } else {
            cout << scores[4] + '+' << endl;
        }

    } else if (numeric_grade_input >= 50) {
        if (numeric_grade_input < 54) {
            cout << scores[5] + '-' << endl;
        } else if (numeric_grade_input < 57) {
            cout << scores[5] << endl;
        } else {
            cout << scores[5] + '+' << endl;
        }

    } else {
        cout << scores[6] << endl;
    }
}