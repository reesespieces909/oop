#ifndef GRIDUNIT_H
#define GRIDUNIT_H

#include <tuple>

class GridUnit {
protected:
    std::tuple<int, int> coordinates;
    char entity;

public:
    GridUnit(int x, int y, char entity) : coordinates(std::make_tuple(x, y)), entity(entity) {}

    virtual ~GridUnit() {}  

    std::tuple<int, int> getCoordinates() const {
        return coordinates;
    }

    char getEntity() const {
        return entity;
    }

    void setCoordinates(int x, int y) {
        coordinates = std::make_tuple(x, y);
    }

    void setEntity(char entity) {
        this->entity = entity;
    }
};

#endif  

