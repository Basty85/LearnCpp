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
    int i = 0, q = 0;
    vector<int> vec_i_orig;
    vector<int> vec_i_result;

    cout << "Insert integer numbers: ";
    while (cin >> i) {
        vec_i_orig.push_back(i);
    }
    cout << endl;

    if (vec_i_orig.empty()) {
        cout << "input at least one integer." << endl;
        return -1;
    }
    else if (vec_i_orig.size() == 1) {
        cout << vec_i_orig[0] << " don't have any adjacent elements.";
    }
    else {
        for (decltype(vec_i_orig.size()) i = 0; i != (vec_i_orig.size()-1); ++i) {
            q = vec_i_orig[i] + vec_i_orig[i+1];
            vec_i_result.push_back(q);
        }
        for (auto &c : vec_i_result) {
            cout << c << " ";
        }
    }
    
    

    cout << "\n\n";
}