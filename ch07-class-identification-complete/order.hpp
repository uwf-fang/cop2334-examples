#ifndef ORDER_HPP
#define ORDER_HPP

#include <string>
#include <vector>
#include "item.hpp"
#include "menu.hpp"

using std::vector;
using std::string;

class Order {
  int id;
  vector<Item> items;
  Menu *menu;
  bool ready;
  bool delivered;
  bool paid;

public:
  Order();
  Order();
  ~Order();
  void add(string name, int quantity);
  void addMenu(Menu *menu);
  bool remove(string name, int quantity);
  void isReady();
  void deliver();
  void pay();
  string show();
};
#endif