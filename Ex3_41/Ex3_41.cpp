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

    int arr[] = {0, 3, 5, 9};
    int cnt = 0;

    vector<int> vec1(begin(arr), end(arr));

    for (const auto &c : vec1) {
        cout << c << " ";
    }
    cout << "\n\n";

    vector<int> vec2 = {3, 1, 7, 5, 3, 8};
    int arr2[vec2.size()];

    for (const auto &c : vec2) {
        arr2[cnt] = c;
        ++cnt;
    }
    for (const auto &c : arr2) {
        cout << c << " ";
    }
    cout << "\n\n";

    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int int_arr[10];

    for (int *i = begin(int_arr); i != end(int_arr); ++i)
        *i = ivec[i - begin(int_arr)];

    for (auto &i : int_arr) {
        cout << i << " ";
    }
    cout << endl;
}