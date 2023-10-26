#ifndef GAMESESSION_H
#define GAMESESSION_H

#include "GridUnit.h"
#include "Avatar.h"
#include "Obstacle.h"
#include "Helper.h"
#include <vector>
#include <iostream>
#include <cmath>

class GameSession {
private:
    std::vector<GridUnit*> grid;

public:
    GameSession() {
        
        for (int i = 0; i < 3; i++) {
            grid.push_back(new Avatar(i, i));
            grid.push_back(new Obstacle(i+1, i+1));
        }
    }

    std::vector<GridUnit*>& getGrid() {
        return grid;
    }

    void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight) {
        
        grid.clear();

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
                    int x, y;
                    std::tie(x, y) = avatar->getCoordinates();
                    avatar->setCoordinates(x + 1, y); 

                    
                    for (auto otherUnit : grid) {
                        if (Obstacle* obstacle = dynamic_cast<Obstacle*>(otherUnit)) {
                            int ax, ay, ox, oy;
                            std::tie(ax, ay) = avatar->getCoordinates();
                            std::tie(ox, oy) = obstacle->getCoordinates();
                            double distance = sqrt((ox - ax) * (ox - ax) + (oy - ay) * (oy - ay));

                            if (distance <= obstacleActivationDistance) {
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
