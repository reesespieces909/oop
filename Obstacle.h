#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "GridUnit.h"
#include "Modifier.h"

class Obstacle : public GridUnit {
private:
    bool active;

private:
    
    Obstacle(int x, int y) : GridUnit(x, y, 'O'), active(true) {}

    
    bool isActive() const {
        return active;
    }

    void apply(GridUnit& unit) override {
        unit.setEntity('O');
        active = false;
    }
};

#endif  