#include <iostream>
#include "Car.h"

int main() {
    Car car1;
    car1.set_price(20000);
    
    std::cout << "Car 1 price: " << car1.get_price() << std::endl;
    std::cout << "Car 1 emissions: " << car1.get_emissions() << std::endl;
    
    car1.drive(10);
    std::cout << "Car 1 emissions after driving 10 kms: " << car1.get_emissions() << std::endl;

    Car car2(25000);
    std::cout << "Car 2 price: " << car2.get_price() << std::endl;
    
    car2.drive(15);
    std::cout << "Car 2 emissions after driving 15 kms: " << car2.get_emissions() << std::endl;
    
    return 0;
}
