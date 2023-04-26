#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>
class Appliance
{
private:
int powerRating_;
bool isOn_;

public:
Appliance();
Appliance(int powerRating); // creates an Appliance with a power rating

// getters and setters
int get_powerRating() const;
void set_powerRating(int powerRating);
bool get_isOn() const;
void set_isOn(bool isOn);

void turnOn();
void turnOff();
virtual double getPowerConsumption();
};

#endif