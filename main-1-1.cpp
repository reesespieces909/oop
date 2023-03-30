#include <iostream>
#include "Unit.h"
int main() {

Unit unit; //shows default constuctor
cout<<"The number of bedrooms:"<<unit.get_bedrooms()<<endl;
cout<<"The value is $"<<unit.get_value()<<endl;
cout<<"The number of square meters is:"<<unit.get_area()<<endl;

Unit unit1(4,500,100000);
cout<<"The number of bedrooms:"<<unit1.get_bedrooms()<<endl;
cout<<"The value is $"<<unit1.get_value()<<endl;
cout<<"The number of square meters is:"<<unit1.get_area()<<endl;
}