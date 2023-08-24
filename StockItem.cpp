#include "StockItem.h"


StockItem::StockItem() {
    item_code = 0;
    item_description = "";
}


StockItem::StockItem(int code_num, std::string description) {
    item_code = code_num;
    item_description = description;
}


StockItem::~StockItem() {
    
}

std::string StockItem::get_description() {
    return item_description;
}

int StockItem::get_item_code() {
    return item_code;
}

