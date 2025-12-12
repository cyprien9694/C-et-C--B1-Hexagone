#include "Hulk.hpp"
#include <iostream>

Hulk::Hulk(const std::string& name) : SuperHero(name, 100, 30) {}

void Hulk::displayInfo() const {
    std::cout << "Hulk: " << getName() << " | HP: " << getHealthPoints()
              << " | Special Available: " << (isSpecialAvailable() ? "Yes" : "No") << std::endl;
}

void Hulk::attack(SuperHero& target) {
    int damage = getBaseAttack();
    target.takeDamage(damage);
    takeDamage(damage * 0.05); 
    std::cout << getName() << " attacks " << target.getName() << " for " << damage << " damage!" << std::endl;
}

void Hulk::useSpecialAbility(SuperHero& target) {
    if (!isSpecialAvailable()) {
        std::cout << getName() << " cannot use Rage Mode right now!" << std::endl;
        return;
    }
    setSpecialAvailable(false);
    std::cout << getName() << " enters Rage Mode! His attacks are doubled for 2 turns!" << std::endl;
}