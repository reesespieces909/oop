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
        originalList.people[i].name = "Bob";
        originalList.people[i].age = 30;
    }

    PersonList shallowCopiedList = shallowCopyPersonList(originalList);

    std::cout << "Original PersonList:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << originalList.people[i].name << ", Age = " << originalList.people[i].age << std::endl;
    }

    std::cout << "Shallow Copied PersonList:" << std::endl;
    for (int i = 0; i < shallowCopiedList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << shallowCopiedList.people[i].name << ", Age = " << shallowCopiedList.people[i].age << std::endl;
    }

    delete[] originalList.people;

    return 0;
}
