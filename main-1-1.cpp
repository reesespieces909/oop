#include <iostream>
#include<string>
using namespace std;
#include "StockItem.h" 

int main()
{
Stock_item s1; 
cout<<"Stock Description:"<<s1.getDescription()<<endl; 
cout<<"Stock item number:"<<s1.getItem_Number()<<endl; 
Stock_item s2("This stock Stock_item is very good in quality",200); 
cout<<"Stock Description:"<<s2.getDescription()<<endl; 
cout<<"Stock item number:"<<s2.getItem_Number()<<endl; 

}