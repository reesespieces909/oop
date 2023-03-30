
#include"ApartmentBuilding.h"

ApartmentBuilding::ApartmentBuilding()
{
	capacity = 10;
	units = new Unit[capacity];
	count = 0;
}
ApartmentBuilding::ApartmentBuilding(int capacity)
{
	this->capacity = capacity;
	units = new Unit[capacity];
	count = 0;
}
int ApartmentBuilding::get_capacity()
{
	return capacity;
}

int ApartmentBuilding::get_current_number_of_units()
{
	return count;
}

Unit* ApartmentBuilding::get_contents()
{
	return units;
}

bool ApartmentBuilding::add_unit(Unit unit)
{
	if (count >= capacity)
		return false;
	else
	{

		units[count] = unit;
		count++;
		return true;
	}
}

ApartmentBuilding::~ApartmentBuilding()
{
	delete[] units;
	units = nullptr;
}