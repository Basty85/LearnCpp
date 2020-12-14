// Gogo gadget!


#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    string s1 = "";
    string s2 = "";

    cout << "Type 1st string: " << endl;
    getline(cin, s1);
    cout << "\n";
    cout << "Type 2nd string: " << endl;
    getline(cin, s2);
    cout << "\n";

    if ( s1 > s2) {
        cout << "1st string is larger" << "\n";
    } 
    else {
        if (s2 > s1) {
            cout << "2nd string is larger" << "\n";
        }
        else {
            cout << "Strings are equal" << "\n";
        }
    }

return 0;
}