#include "StockItem.h"

// Default constructor
StockItem::StockItem() {
    item_code = 0;
    item_description = "";
}

// Parameterized constructor
StockItem::StockItem(int code_num, std::string description) {
    item_code = code_num;
    item_description = description;
}

// Destructor
StockItem::~StockItem() {
    // You can add cleanup code here if needed
}

std::string StockItem::get_description() {
    return item_description;
}

int StockItem::get_item_code() {
    return item_code;
}

