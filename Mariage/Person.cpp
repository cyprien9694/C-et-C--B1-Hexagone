#include "Person.hpp"

Person::Person() : name(""), age(0), partner(nullptr) {}

Person::Person(string newName, int newAge) : name(newName), age(newAge), partner(nullptr) {}

Person::~Person() {}

void Person::setPartner(Person* newPartner) {
    if(!newPartner) return;
    if (this->partner == newPartner){ 
    cout << name << " est déjà marie(e) avec " << newPartner->name << "." << endl;
    return; 
    }
    if (this->isMan() == newPartner->isMan()) {
    cout << "Erreur : Mariage entre " << name << " et " << newPartner->name << " impossible (meme genre)." << endl;
    return;
}

this->partner = newPartner;
newPartner->partner = this;
}

void Person::display() const {
    cout << name << " a " << age << " ans. ";
    if (partner) {
        cout << "Est marie(e) a " << partner->name << "." << endl;
    } else {
        cout << "Est celibataire." << endl;
    }
}
