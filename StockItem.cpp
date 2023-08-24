#include <iostream>
#include <iomanip>
#include<string.h>
#include "StockItem.h"
using namespace std;

Stock_item :: Stock_item() 
{
cout<<"Default constructor is called"<<endl;
item_number=0; 
description=" "; 
  

}

Stock_item :: Stock_item(string description,int item_number) 
{
  
this->item_number=item_number; 
this->description=description;
}

string Stock_item::getDescription() 
{
return description;
}
int Stock_item::getItem_Number() 
{
return item_number;
}
Stock_item::~Stock_item() 
{
cout<<"Destructor is called"<<endl;
}

