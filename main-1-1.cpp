#include <iostream>
#include <vector>
#include "vehicle.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"

int main() {
    std::vector<Vehicle*> vehicles;

    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter number of cars: ";
    std::cin >> numCars;

    std::cout << "Enter number of buses: ";
    std::cin >> numBuses;

    std::cout << "Enter number of motorbikes: ";
    std::cin >> numMotorbikes;

    for (int i = 0; i < numCars; ++i) {
        vehicles.push_back(new Car(i + 1));
    }

    for (int i = 0; i < numBuses; ++i) {
        vehicles.push_back(new Bus(i + 1));
    }

    for (int i = 0; i < numMotorbikes; ++i) {
        vehicles.push_back(new Motorbike(i + 1));
    }

    for (const Vehicle* vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle->getID()
                  << " Parking Duration: " << vehicle->getParkingDuration() << " seconds"
                  << std::endl;
    }

    // Clean up memory
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}
