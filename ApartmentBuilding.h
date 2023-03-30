#ifndef _ApartmentBuilding_H
#define _ApartmentBuilding_H
#include"Unit.h"

class ApartmentBuilding
{
public:
	ApartmentBuilding();
	ApartmentBuilding(int capacity);
	int get_capacity();

	int get_current_number_of_units();

	Unit* get_contents();
	
	bool add_unit(Unit unit);
	
	~ApartmentBuilding();

private:
	Unit *units;
	int capacity;
	int count;
};
#endif



