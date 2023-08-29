#include "Vehicle.h"

Vehicle::Vehicle(int id) : ID(id) {
    time(&timeofEntry);
}

int Vehicle::getID() const {
    return ID;
}

int Vehicle::getParkingDuration() const {
    std::time_t currentTime;
    time(&currentTime);
    return static_cast<int>(difftime(currentTime, timeofEntry));
}
