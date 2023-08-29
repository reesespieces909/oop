#include "player.h"
#include <iostream>

Player::Player(const std::string& name, int health, int damage)
    : name(name), health(health), damage(damage) {}

void Player::attack(Player* opponent, int damage) {
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage) {
    health -= damage;
    std::cout << name << " took " << damage << " damage. Remaining health: " << health << std::endl;
}

int Player::getHealth() const {
    return health;
}

void Player::setHealth(int newHealth) {
    health = newHealth;
}

std::string Player::getName() const {
    return name;
}
