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
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};


    cout << v1.size() << " " << v2.size() << " " << v3.size() << " " << v4.size() << " " << v5.size() << " " << v6.size() << " " << v7.size() << "\n\n";

    for (auto it = v1.cbegin(); it != v1.cend(); ++it) {
        cout << *it << " ";
    }
    
    cout << endl;

    for (auto it = v2.cbegin(); it != v2.cend(); ++it) {
        cout << *it << " ";
    }
    
    cout << endl;

    for (auto it = v3.cbegin(); it != v3.cend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = v4.cbegin(); it != v4.cend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = v5.cbegin(); it != v5.cend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = v6.cbegin(); it != v6.cend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = v7.cbegin(); it != v7.cend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;
    /*
    for (auto &c : v1) {
        cout << c << endl;
    }
    cout << endl;

    for (auto &c : v2) {
        cout << c << endl;
    }
    cout << endl;

    for (auto &c : v3) {
        cout << c << endl;
    }
    cout << endl;

    for (auto &c : v4) {
        cout << c << endl;
    }
    cout << endl;

    for (auto &c : v5) {
        cout << c << endl;
    }
    cout << endl;

    for (auto &c : v6) {
        cout << c << endl;
    }
    cout << endl;

    for (auto &c : v7) {
        cout << c << endl;
    }
    cout << endl;
    */
}