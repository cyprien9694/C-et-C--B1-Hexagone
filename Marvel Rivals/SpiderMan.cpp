#include "SpiderMan.hpp"
#include <iostream>

SpiderMan::SpiderMan(const std::string& name) : SuperHero(name, 100, 15) {}

void SpiderMan::displayInfo() const {
    std::cout << "Spider-Man: " << getName() << " | HP: " << getHealthPoints()
              << " | Special Available: " << (isSpecialAvailable() ? "Yes" : "No") << std::endl;
}

void SpiderMan::attack(SuperHero& target) {
    std::cout << getName() << " attacks " << target.getName() << " with web shots!" << std::endl;
    target.takeDamage(getBaseAttack());
}

void SpiderMan::useSpecialAbility(SuperHero& target) {
    std::cout << getName() << " uses webbing to immobilize " << target.getName() << "!" << std::endl;
    target.takeDamage(25); 
}