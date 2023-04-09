#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    double duration = std::difftime(currentTime, timeOfEntry);
    duration *= 0.85; // Apply 15% reduction
    return static_cast<int>(duration);
}