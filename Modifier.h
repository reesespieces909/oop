#include "GridUnit.h"

class Modifier {
public:
    virtual void apply(GridUnit& unit) = 0;
};
