#ifndef MUSICIAN_H_
#define MUSICIAN_H_
#include <iostream>

class Musician
{
private:
std::string instru;
int experie;
public:
Musician(); 
Musician(std::string instrument, int experience);
std::string get_instrument();
int get_experience();
~Musician(); 
};

#endif 