#include "Character.cpp"
#include "Weapon.cpp"

int main() {
    Weapon sword("Epee d'acier", 30);
    Weapon staff("Baton magique", 20);

    Character geralt("Geralt", 100, 100, sword);
    Character yennefer("Yennefer", 100, 100, staff);

    cout << "--- Debut du combat ---" << endl;

    geralt.display();
    yennefer.display();

    cout << "\nGeralt attaque Yennefer !" << endl;
    geralt.attack(yennefer);
    yennefer.display();

    cout << "\nYennefer boit une potion de vie de 30 points." << endl;
    yennefer.takeLifePotion(30);
    yennefer.display();

    cout << "\nGeralt change d'arme pour une hache (50 degats)." << endl;
    geralt.switchWeapon("Hache", 50);
    geralt.display();

    cout << "\nGeralt attaque Yennefer !" << endl;
    geralt.attack(yennefer);
    yennefer.display();

    cout << "\n--- Fin du combat ---" << endl;

    return 0;
}
