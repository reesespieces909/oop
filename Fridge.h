Fridge.h

#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance {
private:
   double volume_;

public:
   Fridge();
   Fridge(int powerRating, double volume);

   void setVolume(double volume);
   double getVolume() const;

   double getPowerConsumption() override;
};

#endif

Fridge.cpp

#include "Fridge.h"

Fridge::Fridge() : volume_(0.0) {}

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume_(volume) {}

void Fridge::setVolume(double volume) {
   volume_ = volume;
}

double Fridge::getVolume() const {
   return volume_;
}

double Fridge::getPowerConsumption() {
   return get_powerRating() * 24 * (volume_ / 100);
}