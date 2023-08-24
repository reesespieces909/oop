#ifndef STOCK_ITEM_H
#define STOCK_ITEM_H 

class Stock_item
{
private :
int item_number;
std::string description;
public :

Stock_item();

Stock_item(std::string description,int item_number);

std::string getDescription();
int getItem_Number();

~Stock_item();
};

#endif

