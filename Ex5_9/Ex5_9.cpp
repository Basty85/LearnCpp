#include <bitset>
#include <cstring>
#include <iostream>
#include <vector>

using std::begin;
using std::bitset;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::strcat;
using std::strcpy;
using std::string;
using std::vector;

int main() {

    string s1 = "";
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, special_char = 0, two_char_seequence = 0;

    cout << "Enter text to analyze: ";
    getline(cin, s1);

    for (auto &c : s1) {

        switch (c) {

            case 'a':
            case 'A':
                ++aCnt;
                break;
            
            case 'e':
            case 'E':
                ++eCnt;
                break;

            case 'i':
            case 'I':
                ++iCnt;
                break;

            case 'o':
            case 'O':
                ++oCnt;
                break;

            case 'u':
            case 'U':
                ++uCnt;
                break;
            
            case ' ':
            case '\t':
            case '\n':
                ++special_char;
                break;
        }

        /*if (c == 'a' || c == 'A')
            ++aCnt;
        if (c == 'e' || c == 'E')
            ++eCnt;
        if (c == 'i' || c == 'I')
            ++iCnt;
        if (c == 'o' || c == 'O')
            ++oCnt;
        if (c == 'u' || c == 'U')
            ++uCnt;
        if (c == ' ' || c == '\n')
            ++special_char;*/
    }
    //Ex5_12
    for (auto it = s1.begin(); it != s1.end()-1; ++it) {
        if (*it == 'f' && *(it+1) == 'f') {
            ++two_char_seequence;
        }
        if (*it == 'f' && *(it+1) == 'l') {
            ++two_char_seequence;
        }
        if (*it == 'f' && *(it+1) == 'i') {
            ++two_char_seequence;
        }
    }

    cout << "Number of a's: " << aCnt << endl;
    cout << "Number of e's: " << eCnt << endl;
    cout << "Number of i's: " << iCnt << endl;
    cout << "Number of o's: " << oCnt << endl;
    cout << "Number of u's: " << uCnt << endl;
    cout << "Number of special chars is: " << special_char << endl;
    cout << "Numer of zwo char sequences: " << two_char_seequence << endl;
    cout << s1 << endl;
}