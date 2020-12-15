#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    string s1("");
    string s2("");
    string s3("");
    cout << "Insert string wit punctuation: " << endl;
    getline(cin, s1);

    for (auto &c : s1) {
        if (ispunct(c)) {
            s3 += c;   
        }
        else {
            s2 += c;
        }
    }
    cout << "Without punctuation is: " << s2 << endl;
    cout << "Punctuation rest is: " << s3 << endl;
}