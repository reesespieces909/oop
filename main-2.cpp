#include <iostream>
#include "Obstacle.h"
#include "Avatar.h"

int main() {
    
    Avatar avatar(5, 5);
    std::cout << "Avatars initial position: (" << std::get<0>(avatar.getCoordinates()) << ", " 
              << std::get<1>(avatar.getCoordinates()) << ")\n";

    avatar.shift(2, -3);
    std::cout << "Avatars shifted position: (" << std::get<0>(avatar.getCoordinates()) << ", " 
              << std::get<1>(avatar.getCoordinates()) << ")\n";

    Obstacle obstacle(7, 2);
    std::cout << "Obstacles position: (" << std::get<0>(obstacle.getCoordinates()) << ", " 
              << std::get<1>(obstacle.getCoordinates()) << ")\n";
    std::cout << "Is obstacle active? " << (obstacle.isActive() ? "Yes" : "No") << "\n";

    obstacle.apply(avatar);
    std::cout << "Avatars position after obstacle: (" << std::get<0>(avatar.getCoordinates()) << ", " 
              << std::get<1>(avatar.getCoordinates()) << ") with entity type: " << avatar.getEntity() << "\n";
    std::cout << "Is obstacle active? " << (obstacle.isActive() ? "Yes" : "No") << "\n";

    return 0;
}
