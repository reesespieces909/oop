#ifndef TESLA_H
#define TESLA_H

#include "Car.h"

class Tesla : public Car {
public:
    Tesla();
    Tesla(char model, int price);

    char get_model() const;
    float get_batteryPercentage() const;
    void set_model(char model);
    void set_batteryPercentage(float batteryPercentage);
    
    void chargeBattery(int mins);
    void drive(int kms) override;

    virtual ~Tesla();  // Virtual destructor for proper polymorphism support

private:
    char model;
    float batteryPercentage;  // Initially 100%

    static const float MAX_BATTERY_PERCENTAGE;
};

#endif // TESLA_H
