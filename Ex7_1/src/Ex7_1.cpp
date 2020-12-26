#include <bitset>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <vector>
//#define NDEBUG
#include "Sales_data.h"
#include "Person.h"

using std::begin;
using std::bitset;
using std::cerr;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::runtime_error;
using std::strcat;
using std::strcpy;
using std::string;
using std::vector;

int main() {

    //cout << "Daten von Sebastian eingeben: ";
    Person person1;
    read(cin, person1);
    print(cout, person1);

    cout << endl << endl;
    Sales_data total;
    cout << "Enter boookNo, units_sold & price for the 1st dataset: ";
    if (read(cin, total)) {
        Sales_data trans;
        cout << "Enter next dataset boookNo, units_sold & price: ";
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
                cout << "Identical isbn detected. Enter next: ";
            } else {
                cout << "New isbn detected. Last sum of isbn " << total.isbn() << " was: ";
                print(cout, total);
                cout << endl;
                total = trans;
                cout << "Enter next dataset boookNo, units_sold & price: ";
            }
        }
        cout << endl
             << "Finished, last data was: ";
        print(cout, total);
        cout << endl;
    } else {
        cerr << endl << "Wtf, no data?!" << endl;
        return -1;
    }
    return 0;
}
