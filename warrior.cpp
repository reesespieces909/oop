#include "warrior.h"
#include <iostream>

Warrior::Warrior(const std::string& name, int health, int damage, const std::string& weapon)
    : Player(name, health, damage), weapon(weapon) {}

void Warrior::swingWeapon(Player* opponent) {
    opponent->takeDamage(damage + 20);
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << " dealing " << (damage + 20) << " damage!" << std::endl;
}
