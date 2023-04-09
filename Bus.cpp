#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    double duration = std::difftime(currentTime, timeOfEntry);
    duration *= 0.75; // Apply 25% reduction
    return static_cast<int>(duration);
}