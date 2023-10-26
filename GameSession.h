#ifndef GAMESESSION_H
#define GAMESESSION_H

#include <vector>
#include <iostream>  
#include "GridUnit.h"
#include "Avatar.h"
#include "Obstacle.h"
#include "Helper.h"

class GameSession {
private:
    std::vector<GridUnit*> grid;

public:
    GameSession() {}

    std::vector<GridUnit*>& getGrid() {
        return grid;
    }

    void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight) {
        grid.clear();

        for (int i = 0; i < numAvatars; i++) {
            std::tuple<int, int> coord = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            int x = std::get<0>(coord);
            int y = std::get<1>(coord);
            grid.push_back(new Avatar(x, y));
        }

        for (int i = 0; i < numObstacles; i++) {
            std::tuple<int, int> coord = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            int x = std::get<0>(coord);
            int y = std::get<1>(coord);
            grid.push_back(new Obstacle(x, y));
        }
    }

    void gameCycle(int maxCycles, double obstacleActivationDistance) {
        int cycleCount = 0;
        while (cycleCount < maxCycles) {
            cycleCount++;

            
            for (auto& unit : grid) {
                if (Avatar* avatar = dynamic_cast<Avatar*>(unit)) {
                    avatar->shift(1, 0);
                    if (std::get<0>(avatar->getCoordinates()) >= maxCycles) {
                        std::cout << "Avatar has won the game!" << std::endl;
                        return;
                    }
                }
            }

            
            for (auto& unit : grid) {
                if (Avatar* avatar = dynamic_cast<Avatar*>(unit)) {
                    for (auto& otherUnit : grid) {
                        if (Obstacle* obstacle = dynamic_cast<Obstacle*>(otherUnit)) {
                            double distance = Helper::calculateDistance(avatar->getCoordinates(), obstacle->getCoordinates());
                            if (distance <= obstacleActivationDistance && obstacle->isActive()) {
                                obstacle->apply(*avatar);
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
