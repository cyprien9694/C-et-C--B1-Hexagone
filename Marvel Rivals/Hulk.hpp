#include "SuperHero.hpp"
#include <iostream>

class Hulk : public SuperHero {
private:
    int rageTurns;
public:
    Hulk();     
    Hulk(const std::string& name);
    void displayInfo() const;
    void attack(SuperHero& target);
    void useSpecialAbility(SuperHero& target);
};
