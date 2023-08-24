#include "Store.h"

Store::Store() {
    max_capacity = 0;
    current_stock_count = 0;
    stock_list = nullptr;
}

Store::Store(int capacity) {
    max_capacity = capacity;
    current_stock_count = 0;
    stock_list = new StockItem[max_capacity];
}

Store::~Store() {
    delete[] stock_list;
}

int Store::get_Total_Stock_Count() {
    return current_stock_count;
}

int Store::get_Stock_Count(int item_code) {
    int count = 0;
    for (int i = 0; i < current_stock_count; ++i) {
        if (stock_list[i].get_item_code() == item_code) {
            count++;
        }
    }
    return count;
}

StockItem* Store::get_Stock_List() {
    return stock_list;
}

bool Store::add_Stock(StockItem new_stock) {
    if (current_stock_count < max_capacity) {
        stock_list[current_stock_count] = new_stock;
        current_stock_count++;
        return true;
    }
    return false;
}
