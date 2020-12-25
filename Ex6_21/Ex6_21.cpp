#include <algorithm>
#include <bitset>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <vector>

using std::begin;
using std::bitset;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::runtime_error;
using std::strcat;
using std::strcpy;
using std::string;
using std::vector;
using std::find;

int int_pointer_larger_return(int num1, int *pnum1);
void swap_pointers(int *&pn1, int *&pn2);
void print(const int *beg, const int *end);

int main() {

    int nu = 13;
    int nu2 = 15;
    int *pnu = &nu;
    int *pnu2 = &nu2;

    int greater;

    greater = int_pointer_larger_return(nu, &nu2);

    cout << "The greater value one is: " << greater << endl << endl;
    
    swap_pointers(pnu, pnu2);

    cout << "pnu points to: " << *pnu << endl;
    cout << "pnu2 points to: " << *pnu2 << endl;


    int i = 1, j[2] = { 2, 3};

    print(begin(j), end(j));
    print(&i, &i+1);

    return 0;
}

int int_pointer_larger_return(int num1, int *pnum1) {
    int result;

    if (num1 > *pnum1)
        result = num1;
    else
    {
        result = *pnum1;
    }
    
    return result;
}

void swap_pointers(int *&pn1, int *&pn2) {
    int *ptemp;
    ptemp = pn1;
    pn1 = pn2;
    pn2 = ptemp;
}

void print(const int *beg, const int *end) {
    while (beg != end) {
        cout << *beg++ << endl;
    }
}