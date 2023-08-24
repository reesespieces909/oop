#ifndef STORE_H
#define STORE_H

#include "StockItem.h"

class Store {
public:
    Store();
    Store(int capacity);
    ~Store();

    int get_Total_Stock_Count();
    int get_Stock_Count(int item_code);
    StockItem* get_Stock_List();
    bool add_Stock(StockItem new_stock);

private:
    int max_capacity;
    int current_stock_count;
    StockItem* stock_list;
};

#endif // STORE_H
