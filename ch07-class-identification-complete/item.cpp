#include "item.hpp"

  Item::Item() {
    menuItemId = 0;
    quantity = 0;
  }

  Item::Item(int menuItemId, int quantity) {
    this->menuItemId = menuItemId;
    this->quantity = quantity;
  }

    int Item::getID() {
      return menuItemId;
    }

    int Item::getQuantity() {
      return quantity;
    }
