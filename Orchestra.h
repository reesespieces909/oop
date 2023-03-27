#ifndef ORCHESTRA_H_

#define ORCHESTRA_H_

#include "Musician.h"

class Orchestra

{
private:
int max_size;
int curr_size;
Musician *members;
public:
Orchestra();
Orchestra(int size); 

int get_current_number_of_members();

bool has_instrument(std::string instrument);

Musician* get_members(); 

bool add_musician(Musician new_musician);

~Orchestra();
};

#endif 