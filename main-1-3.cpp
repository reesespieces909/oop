#include <iostream>
#include "Person.h"

int main() {
    int n;
    std::cout << "Enter the number of persons: ";
    std::cin >> n;

    PersonList originalList;
    originalList.numPeople = n;
    originalList.people = new Person[n];

    for (int i = 0; i < n; ++i) {
        originalList.people[i].name = "Alice";
        originalList.people[i].age = 25;
    }

    PersonList copiedList = deepCopyPersonList(originalList);

    std::cout << "Original PersonList:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << originalList.people[i].name << ", Age = " << originalList.people[i].age << std::endl;
    }

    std::cout << "Copied PersonList:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << copiedList.people[i].name << ", Age = " << copiedList.people[i].age << std::endl;
    }

    delete[] originalList.people;
    delete[] copiedList.people;

    return 0;
}
