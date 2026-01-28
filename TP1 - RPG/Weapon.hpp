#pragma once
#include <iostream>
using namespace std;

class Weapon
{
private:
    string name;
    int damages;

public:
    Weapon();
    Weapon(string newName, int newDamages);

    void update(string newName, int newDamages);
    void display() const;
    int getDamages() const;
};