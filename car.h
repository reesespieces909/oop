#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle {
public:
    Car(int id);
    int getParkingDuration() const override;
};

#endif