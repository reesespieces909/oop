#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    std::time_t timeofEntry;
    int ID;

public:
    Vehicle(int id);
    int getID() const;
    int getParkingDuration() const;
};

#endif
