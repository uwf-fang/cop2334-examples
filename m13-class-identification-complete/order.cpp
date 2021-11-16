#include "order.hpp"
#include "item.hpp"

void Order::add(string name, int quantity) {
    int menuID = menu.findIDByName(name);
    items.push_back(Item(menuID, quantity));
}