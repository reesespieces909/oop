#include"ApartmentBuilding.h"
#include<iostream>
using namespace std;
int main()
{
	
	ApartmentBuilding ApartmentBuilding(4);
	ApartmentBuilding.add_unit(Unit(6, 61.44, 145));
	ApartmentBuilding.add_unit(Unit(4, 124.54, 890));
	ApartmentBuilding.add_unit(Unit(2, 435.65, 3426));
	

	cout << "ApartmentBuilding Capacity: " << ApartmentBuilding.get_capacity()<<endl;
	cout << "Current units in ApartmentBuilding: " << ApartmentBuilding.get_current_number_of_units()<<endl;
	
	Unit* units = ApartmentBuilding.get_contents();

	
	for (int i = 0; i < ApartmentBuilding.get_current_number_of_units(); i++)
	{
		cout <<"Number Of Bedrooms: "<< units[i].get_num_bedrooms() << ", area: " << units[i].get_area() << ", value: $" << units[i].get_value() << endl;
	}
	return 0;
}
