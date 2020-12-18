#include <iostream>
#include <string>
#include <vector>
//#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main()
{
    char c3[] = "Howsegoin'";
    const char c1[] = "Hello World!";
    const char c2[] = "Hello world!";
    auto len1 = end(c1) - begin(c1);
    auto len2 = end(c2) - begin(c2);
    int cnt = 1;

    cout << "Subscript comparison: " << endl;
    if ( len1 == len2) {
        for (auto it = 0; it != len1-1; ++it) {
            if (c1[it] == c2[it]) {
                cout << it+1 << ". " << "Character is equal" << endl;
            } else {
                cout << it+1 << ". " << "Character is NOT equal" << endl;
            }
        }
    } else {
        cout << "C-sytle strings not equal" << endl;
    }

    cout << endl << "Pointer comparison: " << endl;
    if ( len1 == len2) {
        for (auto idx = c1, idxx = c2; idx != end(c1); ++idx, ++idxx) {
            if (*idx == *idxx) {
                cout << cnt << ". " << "Character is equal" << endl;
                ++cnt;
            } else {
                cout << cnt << ". " << "Character is NOT equal" << endl;
                ++cnt;
            }
        }
    } else {
        cout << "C-sytle strings not equal" << endl;
    }

    cout << "\n\n";

    string s1 = "Moschtkopp";
    string s2 = "Moschtkopp";

    cout << "size of s1 with size(): " << s1.size() << endl;
    cout << "size of s1 calculated via pointers: " << s1.end() - s1.begin() << endl;

    if (s1 == s2) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    

}