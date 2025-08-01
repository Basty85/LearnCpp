// Sales_data.h
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

// own Sales_data
struct Sales_data {

    //Members
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    //Member functions
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;

};

//Non member functions
Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);

#endif