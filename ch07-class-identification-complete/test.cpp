/**
 * Code Template
 */

#include <iostream>
#include "item.hpp"
#include "menuitem.hpp"
#include "order.hpp"

using namespace std;

void testOrder();
void testItem();
void testMenuItem();

// void testOrder() {
//     Order myOrder;

//     return;
// }

void testItem() {
  Item item(1, 2);  // menu id = 1, quantity = 2
  assert(item.getID() == 1);
  assert(item.getQuantity() == 2);
}

void testMenuItem() {
  MenuItem menuItem1("Dish 1", 3.0);
}

int main(int argc, char const *argv[]) {

  // testOrder();
  testItem();
  testMenuItem();

  return EXIT_SUCCESS;
}

