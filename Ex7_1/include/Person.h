#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

struct Person {

    //Members
    std::string name;
    std::string address;

    //Member funtions
    std::string return_name() const { return name; }
    std::string return_address() const { return address; }

};

std::ostream &print(std::ostream &, const Person &);
std::istream &read(std::istream &, Person &);


#endif