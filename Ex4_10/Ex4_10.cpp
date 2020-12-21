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

    int inp = 0;
    vector<int> vi;

    while ((cin >> inp) && (inp != 42)) {
        vi.push_back(inp);
    }

    for (auto &c : vi) {
        cout << c << " ";
    }

    cout << endl;

    //Ex4_11
    int a = 4, b = 3, c = 2, d = 1;

    if ((a > b) && (b > c) && (c > d)) {
        cout << "Yeah" << endl;
    } else {
        cout << "Nope" << endl;
    }

    cout << endl;

    vector<string> v_str = { "hello", "wurlitzer", "why", "you" };

    vector<string>::iterator it = v_str.begin();

    cout << (++it)->size() << endl;



    return 0;
}
