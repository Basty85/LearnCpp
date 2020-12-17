#include <iostream>
#include <string>
#include <vector>
//#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main()
{
    constexpr size_t array_size = 10;
    int arry[array_size];

    for (int *it = begin(arry); it != end(arry); ++it) {
        *it = 12;
    }

    for (auto &c : arry) {
        cout << c << " ";
    }

    cout << "\n\n";

    
    for (int *it = begin(arry); it != end(arry); ++it) {
        *it = 0;
    }

    for (auto c : arry) {
        cout << c << " ";
    }

    cout << "\n\n";


    //Check for array equality!
    int va[] = { 2, 4, 5, 7, 6 };
    int vb[] = { 2, 4, 5, 7, 6 };

    auto laenge_va = end(va) - begin(va);
    auto laenge_vb = end(vb) - begin(vb);

    if (laenge_va == laenge_vb) {
        for (size_t idx = 0; idx < laenge_va; ++idx) {
            if (va[idx] == vb[idx]) {
                cout << idx << ". " << "array element equal" << "\n";
            } else {
                cout << idx << ". " << "array element NOT equal" << "\n";
            }
        }

    } else {
        cout << "Arrays are NOT equal\n";
    }

    cout << "\n";
    cout << "Array lengths: " << laenge_va << " " << laenge_vb << "\n\n";

    //Same with vector class types
    vector<int> vec_a(10, 5);
    vector<int> vec_b(10, 5);

    if (vec_a == vec_b)
        cout << "Are equal\n";
    else
        cout << "Not equal\n";

    cout << vec_a.end() - vec_a.begin();


}