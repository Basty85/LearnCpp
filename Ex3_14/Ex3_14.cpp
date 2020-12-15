#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

int main()
{
    vector<int> v1;
    int i = 0;
    vector<string> vs1;
    string s = "";


    /*cout << "Insert int numbers: " << endl;
    while (cin >> i) {
        v1.push_back(i);
    }

    for (auto &c : v1)
        cout << c << endl;
    */
    cout << "Insert strings: " << endl;
    while (cin >> s) {
        vs1.push_back(s);
    }

    for (auto &c : vs1)
        cout << c << endl;
}