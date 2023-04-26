#include <iostream>
#include "Fridge.h"

int main() {
   Fridge fridge(100, 200.0);
   fridge.turnOn();
   std::cout << "Fridge power consumption: " << fridge.getPowerConsumption() << " watts\n";
   fridge.setVolume(250.0);
   std::cout << "Fridge volume: " << fridge.getVolume() << " liters\n";
   fridge.turnOff();
   return 0;
}