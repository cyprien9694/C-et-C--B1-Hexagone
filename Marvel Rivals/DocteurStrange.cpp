#include "DocteurStrange.hpp"
#include <iostream>
#include <string> 
#include <cstdlib> 

DocteurStrange::DocteurStrange(const std::string& name) : SuperHero(name, 100, 10), healUses(3) {}
DocteurStrange::DocteurStrange() : DocteurStrange("Doctor Strange") {}

void DocteurStrange::displayInfo() const {
    std::cout << "Doctor Strange: " << getName() << " | HP: " << getHealthPoints()
              << " | Special ultime: " << (isSpecialAvailable() ? "OUI" : "NON") << std::endl;
}

void DocteurStrange::attack(SuperHero& target) {
    int damage = std::rand() % 16 + 10; 
    target.takeDamage(damage);
    std::cout << getName() << " Attacks " << target.getName() << " for " << damage << " damage!" << std::endl;
}

void DocteurStrange::useSpecialAbility(SuperHero& target) {
    if (healUses > 0) {
        int healAmount = std::rand() % 16 + 15; 
        target.restoreHealth(healAmount);
        healUses--;
        std::cout << getName() << " Heals " << target.getName() << " for " << healAmount << " HP!" << std::endl;
    } else {
        std::cout << getName() << " Ne peut plus soigner" << std::endl;
    }
}