#include "Unit.h"

Unit::Unit()
{
number_of_bedrooms=0;
area=0;
value=0;
}
Unit::Unit(int bedrooms,double Area,int Value)
{
number_of_bedrooms=bedrooms;
area=Area;
value=Value;
}
int Unit::get_num_bedrooms()
{
return number_of_bedrooms;
}
int Unit::get_value()
{
return value;
}
double Unit::get_area()
{
return area;
}
void Unit::set_bedrooms(int bedrooms)
{
number_of_bedrooms=bedrooms;
}
void Unit::set_value(int Value)
{
value=Value;
}
void Unit::set_area(double Area)
{
area=Area;
}
