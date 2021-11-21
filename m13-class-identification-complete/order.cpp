#include "order.hpp"
#include "item.hpp"

Order::Order(): menu(nullptr), id(-1)
void Order::add(string name, int quantity) {
    int menuID = menu.findIDByName(name);
    items.push_back(Item(menuID, quantity));
}
  void addMenu(Menu *menu);
  bool remove(string name, int quantity);

  void isReady();
  void deliver();
  void pay();
  string show();
