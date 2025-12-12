#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    Person* partner;

public:
    Person();
    Person(string newName, int newAge);
    virtual ~Person();

    void setPartner(Person* newPartner);
    virtual void display() const;

    string getName() const{ return name; }
    virtual bool isMan()const = 0;
};
#endif 