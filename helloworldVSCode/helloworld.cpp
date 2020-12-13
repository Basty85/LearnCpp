#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    string s1 = "Worschdsupp\n";
    cout << s1;

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}