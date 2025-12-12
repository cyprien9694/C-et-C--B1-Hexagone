#include "SuperHero.hpp"
#include <iostream>

class IronMan : public SuperHero {
private:
    int cooldownTurns;

public:
IronMan(const std::string& name);
    void displayInfo() const;
    void attack(SuperHero& target);
    void useSpecialAbility(SuperHero& target) ;
    void reduceCooldown();
};

