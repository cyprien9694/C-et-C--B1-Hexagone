#ifndef WOMAN_HPP
#define WOMAN_HPP

#include "Person.hpp"

class Woman : public Person {
public:
    Woman(string newName, int newAge);
    void display() const override;
    bool isMan() const override { return false; }
};
#endif