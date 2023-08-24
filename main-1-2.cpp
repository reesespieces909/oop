#include <iostream>
#include "Store.h"

int main() {
    
    Store store(10);

    
    StockItem item1(101, "Widget");
    StockItem item2(102, "Hammer");
    StockItem item3(101, "Widget");

    store.add_Stock(item1);
    store.add_Stock(item2);
    store.add_Stock(item3);

    
    std::cout << "Total Stock Count: " << store.get_Total_Stock_Count() << std::endl;
    std::cout << "Widget Count: " << store.get_Stock_Count(101) << std::endl;

    StockItem* stockList = store.get_Stock_List();
    for (int i = 0; i < store.get_Total_Stock_Count(); ++i) {
        std::cout << "Item Code: " << stockList[i].get_item_code() << ", Description: " << stockList[i].get_description() << std::endl;
    }

    return 0;
}
