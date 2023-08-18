#include <iostream>
#include "Person.h"
#include "function-1-1.cpp"

int main() {
    int n;
    std::cout << "Enter the number of persons: ";
    std::cin >> n;

    Person* personArray = createPersonArray(n);

    std::cout << "Created an array of " << n << " persons with default values:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << personArray[i].name << ", Age = " << personArray[i].age << std::endl;
    }

    delete[] personArray;

    return 0;
}
