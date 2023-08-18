#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList shallowCopy;
    shallowCopy.numPeople = pl.numPeople;
    shallowCopy.people = pl.people; // Shallow copy: point to the same array
    
    return shallowCopy;
}
