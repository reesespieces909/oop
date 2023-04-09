#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    double duration = std::difftime(currentTime, timeOfEntry);
    duration *= 0.9; // Apply 10% reduction
    return static_cast<int>(duration);
}