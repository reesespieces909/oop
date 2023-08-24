#include <iostream>
#include "StockItem.h"

int main() {
    
    StockItem defaultItem;
    std::cout << "Default Item Code: " << defaultItem.get_item_code() << std::endl;
    std::cout << "Default Item Description: " << defaultItem.get_description() << std::endl;

    
    StockItem item(123, "Sample Item");
    std::cout << "Item Code: " << item.get_item_code() << std::endl;
    std::cout << "Item Description: " << item.get_description() << std::endl;

    return 0;
}
