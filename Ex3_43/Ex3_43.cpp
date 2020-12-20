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

    int ia[3][4] = {
        {0, 2, 4, 6},
        {8, 3, 5, 9},
        {9, 3, 1, 2}};
    //range-based for
    cout << "Range-based for ia: " << endl;
    for (int(&row)[4] : ia) {
        for (int col : row) {
            //col = 5;
            cout << col << " ";
        }
    }
    
    //for w/ iterators
    cout << "\n\n"
         << "For loop /w iterators ib: " << endl;
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ib[rowCnt][colCnt] = {
        {0, 2, 4, 6},
        {8, 3, 5, 9},
        {9, 3, 1, 2}};

    for (int (*it_row)[4] = begin(ib); it_row != end(ib); ++it_row) {
        for (int *it_col = begin(*it_row); it_col != end(*it_row); ++it_col) {
            cout << *it_col << " ";
        }
    }


    //for w/ subscripts
    cout << "\n\n"
         << "For loop /w subscripts ic: " << endl;
    //constexpr size_t rowCnt = 3, colCnt = 4;
    int ic[rowCnt][colCnt] = {
        {0, 2, 4, 6},
        {8, 3, 5, 9},
        {9, 3, 1, 2}};

    for (size_t idx_row = 0; idx_row != rowCnt; ++idx_row) {
        for (size_t idy_col = 0; idy_col != colCnt; ++idy_col) {
            cout << ic[idx_row][idy_col] << " ";
        }
    }

    return 0;
}
