#include <tuple>

class GridUnit {
private:
    std::tuple<int, int> coordinates;
    char entity;

public:
    
    GridUnit() : coordinates(0, 0), entity(' ') {}
    GridUnit(int x, int y, char entity) : coordinates(x, y), entity(entity) {}

    
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
