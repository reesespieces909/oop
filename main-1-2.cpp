#include <iostream>
#include "Person.h"

int main() {
    int n;
    std::cout << "Enter the number of persons: ";
    std::cin >> n;

    PersonList personList = createPersonList(n);

    std::cout << "Created a PersonList with " << personList.numPeople << " people:" << std::endl;
    for (int i = 0; i < personList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << personList.people[i].name << ", Age = " << personList.people[i].age << std::endl;
    }

    delete[] personList.people;

    return 0;
}
