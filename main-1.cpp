#include <iostream>
#include "GridUnit.h"
#include "Helper.h"

int main() {
    
    GridUnit unit(2, 3, 'A');
    std::cout << "Coordinates of unit: (" << std::get<0>(unit.getCoordinates()) << ", " 
              << std::get<1>(unit.getCoordinates()) << ")\n";
    std::cout << "Entity of unit: " << unit.getEntity() << "\n";

    
    unit.setCoordinates(5, 6);
    unit.setEntity('B');
    std::cout << "New Coordinates of unit: (" << std::get<0>(unit.getCoordinates()) << ", " 
              << std::get<1>(unit.getCoordinates()) << ")\n";
    std::cout << "New Entity of unit: " << unit.getEntity() << "\n";

    
    auto randomCoords = Helper::generateRandomCoordinates(10, 10);
    std::cout << "Random Coordinates: (" << std::get<0>(randomCoords) << ", " 
              << std::get<1>(randomCoords) << ")\n";

    std::tuple<int, int> coords1 = {0, 0};
    std::tuple<int, int> coords2 = {3, 4};
    double distance = Helper::calculateDistance(coords1, coords2);
    std::cout << "Distance between (0,0) and (3,4): " << distance << "\n";

    return 0;
}
