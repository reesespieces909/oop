#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string name;
    int health;
    int damage;

public:
    Player(const std::string& name, int health, int damage);
    void attack(Player* opponent, int damage);
    void takeDamage(int damage);

    // Getters and setters
    int getHealth() const;
    void setHealth(int newHealth);
    std::string getName() const;
};

#endif
