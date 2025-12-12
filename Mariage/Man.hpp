#ifndef MAN_HPP
#define MAN_HPP

#include "Person.hpp"

class Man : public Person {
public:
    Man(string newName, int newAge);
    void display() const override;
    bool isMan() const override { return true; }    
};
#endif 