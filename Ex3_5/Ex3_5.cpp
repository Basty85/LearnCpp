#include <iostream>
//#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s_in = "";
    string s_cat = "";


    cout << "Give 1st word: ";
    while(cin >> s_in) {
        
        if (s_cat.empty())
            s_cat += s_in;
        else
            s_cat += " " + s_in;

        cout << "Concatenated string is: " << s_cat << endl;
        cout << "Give next word: ";
    }


return 0;
}