#ifndef MODIFIER_H
#define MODIFIER_H

#include "GridUnit.h"

class Modifier {
public:
    virtual void apply(GridUnit& unit) = 0;
};

#endif  // MODIFIER_H
