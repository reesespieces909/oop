#include <iostream>
#include "GameSession.h"

int main() {
    GameSession game;
    game.initGameSession(3, 5, 10, 10); 

    game.gameCycle(15, 1.5); 

    return 0;
}
