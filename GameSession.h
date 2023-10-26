#ifndef GAMESESSION_H
#define GAMESESSION_H

#include "GridUnit.h" 
#include "Avatar.h"
#include "Obstacle.h"
#include "Helper.h"
#include <vector>
#include <iostream>

class GameSession {
private:
    std::vector<GridUnit*> grid;

public:
    GameSession() {}

    std::vector<GridUnit*>& getGrid() {
        return grid;
    }

    void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight) {
        for (int i = 0; i < numAvatars; i++) {
            auto [x, y] = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            grid.push_back(new Avatar(x, y));
        }

        for (int i = 0; i < numObstacles; i++) {
            auto [x, y] = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            grid.push_back(new Obstacle(x, y));
        }
    }

    void gameCycle(int maxCycles, double obstacleActivationDistance) {
        for (int cycle = 0; cycle < maxCycles; cycle++) {
            for (auto unit : grid) {
                if (Avatar* avatar = dynamic_cast<Avatar*>(unit)) {
                    avatar->shift(1, 0);
                    int avatarX, avatarY;
                    std::tie(avatarX, avatarY) = avatar->getCoordinates();

                    
                    int gridWidth, gridHeight;
                    std::tie(gridWidth, gridHeight) = Helper::generateRandomCoordinates(avatarX + 1, avatarY + 1);
                    if (avatarX >= gridWidth) {
                        std::cout << "Avatar has won the game!" << std::endl;
                        return;
                    }

                    
                    for (auto otherUnit : grid) {
                        if (Obstacle* obstacle = dynamic_cast<Obstacle*>(otherUnit)) {
                            if (obstacle->isActive()) {
                                auto distance = Helper::calculateDistance(avatar->getCoordinates(), obstacle->getCoordinates());
                                if (distance <= obstacleActivationDistance) {
                                    obstacle->apply(*avatar);
                                }
                            }
                        }
                    }
                }
            }
        }
        std::cout << "Maximum number of cycles reached. Game over." << std::endl;
    }
};

#endif  
