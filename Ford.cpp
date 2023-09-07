#include "Ford.h"

const float Ford::MAX_LITRES_OF_FUEL = 60.0f;

Ford::Ford() : Car(), badgeNumber(0), litresOfFuel(MAX_LITRES_OF_FUEL) {}

Ford::Ford(int badgeNumber, int price) : Car(price), badgeNumber(badgeNumber), litresOfFuel(MAX_LITRES_OF_FUEL) {}

int Ford::get_badgeNumber() const {
    return badgeNumber;
}

float Ford::get_litresOfFuel() const {
    return litresOfFuel;
}

void Ford::set_badgeNumber(int badgeNumber) {
    this->badgeNumber = badgeNumber;
}

void Ford::set_litresOfFuel(float litresOfFuel) {
    if (litresOfFuel < 0.0f) {
        this->litresOfFuel = 0.0f;
    } else if (litresOfFuel > MAX_LITRES_OF_FUEL) {
        this->litresOfFuel = MAX_LITRES_OF_FUEL;
    } else {
        this->litresOfFuel = litresOfFuel;
    }
}

void Ford::refuel(int litres) {
    if (litresOfFuel + litres > MAX_LITRES_OF_FUEL) {
        litresOfFuel = MAX_LITRES_OF_FUEL;
    } else {
        litresOfFuel += litres;
    }
}

void Ford::drive(int kms) {
    if (litresOfFuel <= 0.0f) {
        
        return;
    }

    float co2_emission = 234.0f * kms; 
    emissions += static_cast<int>(co2_emission);

    float fuel_used = static_cast<float>(kms) / 5.0f; 
    if (litresOfFuel - fuel_used < 0.0f) {
        litresOfFuel = 0.0f;
    } else {
        litresOfFuel -= fuel_used;
    }
}

Ford::~Ford() {}
