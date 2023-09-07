#include <iostream>
#include "Ford.h"

int main() {
    Ford ford(1234, 30000);
    
    std::cout << "Ford Badge Number: " << ford.get_badgeNumber() << std::endl;
    std::cout << "Ford Price: " << ford.get_price() << std::endl;
    std::cout << "Ford Litres of Fuel: " << ford.get_litresOfFuel() << "L" << std::endl;
    
    ford.refuel(20); 
    std::cout << "Ford Litres of Fuel after refueling: " << ford.get_litresOfFuel() << "L" << std::endl;

    ford.drive(100); 
    std::cout << "Ford Emissions after driving: " << ford.get_emissions() << "g CO2" << std::endl;

    return 0;
}
