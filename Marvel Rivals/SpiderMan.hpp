#include "SuperHero.hpp"
#include <string>

class SpiderMan : public SuperHero {
public:
    SpiderMan(const std::string& name);

    void displayInfo() const override;

    void attack(SuperHero& target) override;

    void useSpecialAbility(SuperHero& target) override;
};