#ifndef AVATAR_H
#define AVATAR_H

#include "GridUnit.h"

class Avatar : public GridUnit {
public:
    
    Avatar(int x, int y) : GridUnit(x, y, 'A') {}

    
    void shift(int dx, int dy) {
        int x, y;
        std::tie(x, y) = getCoordinates();
        setCoordinates(x + dx, y + dy);
    }
};

#endif  
