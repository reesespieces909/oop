#include "Tesla.h"

const float Tesla::MAX_BATTERY_PERCENTAGE = 100.0f;

Tesla::Tesla() : Car(), model('\0'), batteryPercentage(MAX_BATTERY_PERCENTAGE) {}

Tesla::Tesla(char model, int price) : Car(price), model(model), batteryPercentage(MAX_BATTERY_PERCENTAGE) {}

char Tesla::get_model() const {
    return model;
}

float Tesla::get_batteryPercentage() const {
    return batteryPercentage;
}

void Tesla::set_model(char model) {
    this->model = model;
}

void Tesla::set_batteryPercentage(float batteryPercentage) {
    if (batteryPercentage < 0.0f) {
        this->batteryPercentage = 0.0f;
    } else if (batteryPercentage > MAX_BATTERY_PERCENTAGE) {
        this->batteryPercentage = MAX_BATTERY_PERCENTAGE;
    } else {
        this->batteryPercentage = batteryPercentage;
    }
}

void Tesla::chargeBattery(int mins) {
    float charge = mins * 0.5f / 60.0f; 
    if (batteryPercentage + charge > MAX_BATTERY_PERCENTAGE) {
        batteryPercentage = MAX_BATTERY_PERCENTAGE;
    } else {
        batteryPercentage += charge;
    }
}

void Tesla::drive(int kms) {
    if (batteryPercentage <= 0.0f) {
        
        return;
    }

    float co2_emission = 74.0f * kms; 
    emissions += static_cast<int>(co2_emission);

    float battery_used = static_cast<float>(kms) / 5.0f; 
    if (batteryPercentage - battery_used < 0.0f) {
        batteryPercentage = 0.0f;
    } else {
        batteryPercentage -= battery_used;
    }
}

Tesla::~Tesla() {}
