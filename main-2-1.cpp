#include <iostream>
#include "Tesla.h"

int main() {
    Tesla tesla('S', 80000);
    
    std::cout << "Tesla Model: " << tesla.get_model() << std::endl;
    std::cout << "Tesla Price: " << tesla.get_price() << std::endl;
    std::cout << "Tesla Battery Percentage: " << tesla.get_batteryPercentage() << "%" << std::endl;
    
    tesla.chargeBattery(120); // Charge for 120 minutes
    std::cout << "Tesla Battery Percentage after charging: " << tesla.get_batteryPercentage() << "%" << std::endl;

    tesla.drive(50); // Drive for 50 km
    std::cout << "Tesla Emissions after driving: " << tesla.get_emissions() << "g CO2" << std::endl;

    return 0;
}
