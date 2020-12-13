#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main ()
{
/*
    string s1 = "";
    cout << "Insert word:" << endl;
    while (cin >> s1) {
        cout << s1 << endl << endl;
    }
*/
string line = "";

while (getline(cin, line))
    cout << line << "\n\n";

return 0;
}