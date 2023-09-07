#include <iostream>
#include "Fleet.h"
#include "Tesla.h" 
#include "Ford.h"  
#include "Car.h"


int main() {
    Fleet myFleet;

    Car** cars = myFleet.get_fleet();

    for (int i = 0; i < 5; i++) {
        std::cout << "Car " << i + 1 << " price: " << cars[i]->get_price() << std::endl;
    }

    return 0;
}




