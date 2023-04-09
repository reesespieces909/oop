#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter number of cars: ";
    std::cin >> numCars;
    std::cout << "Enter number of buses: ";
    std::cin >> numBuses;
    std::cout << "Enter number of motorbikes: ";
    std::cin >> numMotorbikes;

    const int totalVehicles = numCars + numBuses + numMotorbikes;
    Vehicle* vehicles[totalVehicles];

    // Fill array with Vehicle objects
    int id = 1;
    for (int i = 0; i < numCars; i++) {
        vehicles[i] = new Car(id++);
    }
    for (int i = 0; i < numBuses; i++) {
        vehicles[numCars + i] = new Bus(id++);
    }
    for (int i = 0; i < numMotorbikes; i


