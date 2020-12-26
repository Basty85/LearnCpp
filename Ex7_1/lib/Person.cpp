#include "Person.h"

std::ostream &print(std::ostream &os, const Person &individual) {
    os << individual.return_name() << " " << individual.return_address();
    return os;
}

std::istream &read(std::istream &is, Person &individual) {
    std::cout << "Bitte vollständigen Namen eingeben: ";
    getline(is, individual.name);
    
    std::cout << std::endl << "Bitte vollständige Adresse eingeben: ";
    getline(is, individual.address);
    return is;
}