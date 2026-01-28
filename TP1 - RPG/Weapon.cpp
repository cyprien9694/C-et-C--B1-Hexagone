#include "Weapon.hpp"

Weapon::Weapon()
{
    name = "Epee en bois";
    damages = 10;
}

Weapon::Weapon(string newName, int newDamages)
{
    name = newName;
    damages = newDamages;
}

void Weapon::update(string newName, int newDamages)
{
    name = newName;
    damages = newDamages;
}

void Weapon::display() const
{
    cout << "Armes: " << name << " | Dégats: " << damages << endl;
}

int Weapon::getDamages() const
{
    return damages;
}
