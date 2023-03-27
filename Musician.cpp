#include "Musician.h"

Musician::Musician() : instru("null") , experie(0)
{}
Musician::Musician(std::string instrument, int experience) : instru(instrument), experie(experience)
{}
std::string Musician::get_instrument()
{
return instru;
}
int Musician::get_experience()
{
return experie;
}
Musician::~Musician()
{}

