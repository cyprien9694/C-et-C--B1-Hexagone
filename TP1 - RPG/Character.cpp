#include "Character.hpp"

Character::Character()
{
    name = "";
    life = 100;
    mana = 100;
}

Character::Character(string newName, int newLife, int newMana, Weapon newEquipedWeapon)
{
    name = newName;
    life = newLife;
    mana = newMana;
    equipedWeapon = newEquipedWeapon;
}

Character::~Character() {}

void Character::receiveDamages(int damage)
{
    life -= damage;
    if (life < 0)
        life = 0;
}

void Character::attack(Character &target)
{
    target.receiveDamages(equipedWeapon.getDamages());
}

void Character::takeLifePotion(int amount)
{
    life += amount;
    if (life > 100)
        life = 100;
}

void Character::switchWeapon(string newName, int newDamages)
{
    equipedWeapon.update(newName, newDamages);
}

bool Character::isAlive() const
{
    return life > 0;
}

void Character::display() const
{
    std::cout << "Personnage: " << name << " | Vie: " << life << " | Mana: " << mana << std::endl;
    equipedWeapon.display();
}
