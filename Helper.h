#ifndef HELPER_H
#define HELPER_H

#include <tuple>
#include <cmath>
#include <cstdlib>

class Helper {
public:
    static std::tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight) {
        int x = rand() % gridWidth;
        int y = rand() % gridHeight;
        return std::make_tuple(x, y);
    }

    static double calculateDistance(std::tuple<int, int> coords1, std::tuple<int, int> coords2) {
        int x1, y1, x2, y2;
        std::tie(x1, y1) = coords1;
        std::tie(x2, y2) = coords2;
        return std::sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    }
};

#endif  
