#ifndef STOCKITEM_H
#define STOCKITEM_H

#include <string>

class StockItem {
public:
    StockItem();
    StockItem(int code_num, std::string description);
    ~StockItem();

    std::string get_description();
    int get_item_code();

private:
    int item_code;
    std::string item_description;
};

#endif 
