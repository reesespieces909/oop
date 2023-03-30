#ifndef _Unit_H
#define _Unit_H
#include <iostream>
using namespace std;

class Unit
{
public:
Unit();
Unit(int unit_val,double unit_size,int num_beds);
int get_num_bedrooms();
int get_value();
double get_area();
void set_bedrooms(int);
void set_value(int);
void set_area(double);
private:
int number_of_bedrooms;
double area;
int value;
};
#endif


