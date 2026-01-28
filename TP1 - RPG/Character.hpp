#pragma once
#include <iostream>
#include "Weapon.hpp"

using namespace std;

class Character {
private:
    string name;
    int life;
    int mana;
    Weapon equipedWeapon;

public:
    Character();
    Character(string newName, int newLife, int newMana, Weapon newEquipedWeapon);
    ~Character();
    void receiveDamages(int damage);
    void attack(Character &target);
    void takeLifePotion(int amount);
    void switchWeapon(string newName, int newDamages);
    bool isAlive() const;
    void display() const;
}; 