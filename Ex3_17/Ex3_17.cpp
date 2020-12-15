#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
    string s = "";
    vector<string> vs;
    int cnt = 0;

    cout << "Enter words: ";

    while (cin >> s) {
        vs.push_back(s);
    }

    for (auto &c : vs) {
        for (auto &ci : c) {
            ci = toupper(ci);
        }
    }

    for (decltype(vs.size()) i = 0; i < vs.size() ; ++i) {
        if (cnt < 8) { // solution via counter variable, solution via modulo operator % would lead to less code
            cout << vs[i] << " ";
            ++cnt;
        }
        else {
            cout << endl;
            cout << vs[i] << " ";
            cnt = 0;
        }
    }

    cout << "\n\n" << "You Made It!" << "\n\n";

}