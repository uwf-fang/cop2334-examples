#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
#include <vector>

using std::vector;
using std::string;

class Item {
private:
  int menuItemId;
  int quantity;
public:
  Item();
  Item(int menuItemId, int quantity);
  int getID();
  int getQuantity();
};

#endif