#include "SuperHero.hpp"

SuperHero::SuperHero(const std::string& name, int hp, int baseAttack)
    : name(name), healthPoints(hp), baseAttack(baseAttack), specialAvailable(false) {}

void SuperHero::takeDamage(int amount) {
    healthPoints -= amount;
    if (healthPoints < 0) healthPoints = 0;
}

void SuperHero::restoreHealth(int amount) {
    healthPoints += amount;
    if (healthPoints > 100) healthPoints = 100;
}