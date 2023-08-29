#include "wizard.h"
#include <iostream>

Wizard::Wizard(const std::string& name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
    if (mana >= 20) {
        mana -= 20;
        opponent->takeDamage(damage + 30);
        std::cout << name << " casts a spell on " << opponent->getName() << " dealing " << (damage + 30) << " damage!" << std::endl;
    } else {
        std::cout << name << " doesn't have enough mana to cast a spell." << std::endl;
    }
}
