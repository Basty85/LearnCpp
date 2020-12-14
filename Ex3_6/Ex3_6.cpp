//Ex3_6, Ex3_8

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s1 = "Why";
    string s1_while = "Whyq";
    std::size_t idx_while = 0;
    cout << s1_while[3] << endl;
    string s1_for = "Whyyy";

    for (auto &c : s1) {
        c = 'X';
    }
    cout << s1 << endl;


    while (idx_while < s1_while.size()) {
        s1_while[idx_while] = 'X';
        ++idx_while;
    }
    cout << s1_while << endl;

    for (decltype(s1_for.size()) idx_for = 0; idx_for != s1_for.size(); ++idx_for) {
        s1_for[idx_for] = 'X';
    }
    cout << s1_for << endl;
    
}