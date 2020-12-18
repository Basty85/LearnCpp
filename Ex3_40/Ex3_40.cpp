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

    char c1[] = "Hello.";

    char c2[] = "Why?";
    size_t len1 = end(c1) - begin(c1);
    cout << "len1: " << len1 << endl;
    size_t len2 = end(c2) - begin(c2);
    cout << "len2: " << len2 << endl;
    size_t len_sum_new_corr = len1 + len2 - 1;
    cout << "len_sum_new_corr: " << len_sum_new_corr << endl;
    char c_concat[len_sum_new_corr] = "";
    strcpy(c_concat, c1);
    strcat(c_concat, c2);

    for (int it = 0; it < len_sum_new_corr - 1; ++it) {
        cout << c_concat[it];
    }

    cout << "\n"
         << "test: " << c_concat << endl;

    cout << "\n\n";

    const char cstr1[] = "Hello";
    const char cstr2[] = "world!";

    size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;

    cout << "new_size: " << new_size << endl;
    char *cstr3 = new char[new_size];

    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);

    cout << cstr3 << endl;
}