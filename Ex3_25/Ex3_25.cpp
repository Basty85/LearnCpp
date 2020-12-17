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
    vector<unsigned> scores(11, 0);
    vector<unsigned> grade_vec;
    unsigned grade;
    auto it_start = scores.begin();
    auto it_end   = scores.end();
    //int i = 0;

    while (cin >> grade) {
        if (grade <= 100) {
            grade_vec.push_back(grade);
        }
    }

    for (auto &c : grade_vec) {
        auto i = scores.begin() + c/10;
        *i = *i+1;
    }
    

    for (auto i = scores.begin(); i != scores.end(); ++i) {
        cout << *i << " ";
    }
}