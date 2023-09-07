#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford : public Car {
public:
    Ford();
    Ford(int badgeNumber, int price);

    int get_badgeNumber() const;
    float get_litresOfFuel() const;
    void set_badgeNumber(int badgeNumber);
    void set_litresOfFuel(float litresOfFuel);
    
    void refuel(int litres);
    void drive(int kms) override;

    virtual ~Ford();  

private:
    int badgeNumber;
    float litresOfFuel;  

    static const float MAX_LITRES_OF_FUEL;
};

#endif 
