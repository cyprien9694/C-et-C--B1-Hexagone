#include "Woman.hpp"

Woman::Woman(string newName, int newAge) : Person(newName, newAge) {}

void Woman::display() const {
    cout << "Mme ";
    Person::display();
}
