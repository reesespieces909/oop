#include <iostream>
#include "Player.h"
#include "Character.h"

int main() {
    
    Player player("Jim");

    
    Character enemy("Enemy", /* Pokemon object */);

    
    std::cout << "Player name: " << player.getName() << std::endl;
    player.setName("Red");
    std::cout << "Modified player name: " << player.getName() << std::endl;

    
    /* Pokemon pikachu = ... */
    player.addToParty(pikachu);

    
    player.addBadge("Cascade Badge");
    player.addBadge("Soul Badge");
    bool hasBadge = player.hasBadge("Cascade Badge");
    std::cout << "Player has Cascade Badge: " << (hasBadge ? "Yes" : "No") << std::endl;

    
    /* Move move = ... */
    if (player.canUse("Thunderbolt")) {
        player.useMove("Thunderbolt", enemy.getName());
    }

    
    player.moveUp();

    return 0;
}
