#include <iostream>
#include "GameSession.h"

int main() {
    GameSession game;
    game.initGameSession(3, 5, 10, 10);  // Initialize game with 3 Avatars, 5 Obstacles, and grid size of 10x10

    game.gameCycle(15, 1.5);  // Simulate the game for 15 cycles with obstacle activation distance of 1.5 units

    return 0;
}
