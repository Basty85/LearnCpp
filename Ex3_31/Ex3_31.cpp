#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
    constexpr size_t array_size = 10;
    int arry[array_size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int init_arry[array_size];
    int init_arry_copy[array_size];

    for (auto c : arry) {
        cout << c << " ";
    }
    cout << "\n\n";

    for (size_t ix = 0; ix != array_size; ++ix) {
        init_arry[ix] = ix+5;
    }

    cout << "init_arry: ";
    for (auto c : init_arry) {
        cout << c << " ";
    }
    cout << "\n\n";
    

    for (size_t ix = 0; ix != array_size; ++ix) {
        init_arry_copy[ix] = init_arry[ix];
    }
    cout << "init_arry_copy: ";
    for (auto c : init_arry_copy) {
        cout << c << " ";
    }
    cout << "\n\n";

    vector<int> vec_i(10), vec_i2;
    vec_i = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (auto &c : vec_i) {
        vec_i2.push_back(c);
    }
    cout << "vec_i2: ";
    for (auto &c : vec_i2) {
        cout << c << " ";
    }

}