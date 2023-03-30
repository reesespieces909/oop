#include"ApartmentBuilding.h"
#include<iostream>
using namespace std;
int main()
{
	
	ApartmentBuilding ApartmentBuilding(4);
	ApartmentBuilding.add_unit(Unit(2, 56.78, 231));
	ApartmentBuilding.add_unit(Unit(4, 456.78, 2345));
	ApartmentBuilding.add_unit(Unit(5, 678.90, 1234));
	

	cout << "ApartmentBuilding Capacity: " << ApartmentBuilding.get_capacity()<<endl;
	cout << "Current units in ApartmentBuilding: " << ApartmentBuilding.get_current_number_of_units()<<endl;
	
	Unit* units = ApartmentBuilding.get_contents();

	
	for (int i = 0; i < ApartmentBuilding.get_current_number_of_units(); i++)
	{
		cout <<"Number Of Bedrooms: "<< units[i].get_num_bedrooms() << ", area: " << units[i].get_area() << ", value: $" << units[i].get_value() << endl;
	}
	return 0;
}
