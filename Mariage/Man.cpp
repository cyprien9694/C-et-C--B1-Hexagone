#include "Man.hpp"

Man::Man(string newName, int newAge) : Person(newName, newAge) {}

void Man::display() const {
    cout << "M. ";
    Person::display();
}
