#include <iostream>
#include "Fleet.h"

int main() {
    Fleet myFleet;
    Car** cars = myFleet.get_fleet();

    
    for (int i = 0; i < 5; i++) {
        std::cout << "Car " << i + 1 << ": ";
        cars[i]->print(); 
    }

    return 0;
}
