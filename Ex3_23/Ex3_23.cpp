#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


int main ()
{
    vector<int> v1 { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

    for (auto it = v1.begin(); it != v1.end(); ++it ) {
        *it = *it*2;
        cout << *it << " ";
    }

    cout << endl;

}