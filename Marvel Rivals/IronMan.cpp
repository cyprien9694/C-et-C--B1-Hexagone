#include "IronMan.hpp"
#include <iostream>

IronMan::IronMan(const std::string& name) : SuperHero(name, 100, 20), cooldownTurns(0) {}

void IronMan::displayInfo() const {
    std::cout << "Iron Man: " << getName() << " | HP: " << getHealthPoints()
              << " | Special Available: " << (isSpecialAvailable() ? "Yes" : "No") << std::endl;
}

void IronMan::attack(SuperHero& target) {
    std::cout << getName() << " attacks " << target.getName() << "!" << std::endl;
    target.takeDamage(getBaseAttack());
}

void IronMan::useSpecialAbility(SuperHero& target) {
    if (cooldownTurns == 0) {
        std::cout << getName() << " déclenche une salve de missiles !" << std::endl;
        target.takeDamage(50); 
        cooldownTurns = 3;     
    } else {
        std::cout << getName() << "'s Special ability est en cooldown" << std::endl;
    }
}