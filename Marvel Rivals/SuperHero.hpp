#ifndef SUPERHERO_HPP
#define SUPERHERO_HPP

#include <string>

class SuperHero {
protected:
    std::string name;
    int healthPoints;
    int baseAttack;
    bool specialAvailable;

public:
    SuperHero(const std::string& name, int hp, int baseAttack);

    virtual ~SuperHero() = default;

    virtual void displayInfo() const = 0;
    virtual void attack(SuperHero& target) = 0;
    virtual void useSpecialAbility(SuperHero& target) = 0;

    bool isAlive() const { return healthPoints > 0; }
    void takeDamage(int amount);
    void restoreHealth(int amount);

    // Getters
    const std::string& getName() const { return name; }
    int getHealthPoints() const { return healthPoints; }
    int getBaseAttack() const { return baseAttack; }
    bool isSpecialAvailable() const { return specialAvailable; }

    // Setters
    void setName(const std::string& name) { this->name = name; }
    void setHealthPoints(int hp) { healthPoints = (hp > 100) ? 100 : hp; }
    void setBaseAttack(int attack) { baseAttack = attack; }
    void setSpecialAvailable(bool available) { specialAvailable = available; }
};

#endif