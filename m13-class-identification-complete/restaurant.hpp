#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include <string>
#include <vector>
#include "order.hpp"
#include "menu.hpp"

using std::string;
using std::vector;


class Restaurant
{
private:
  string name;
  Menu menu;
  vector<Order> pendingOrders;
  vector<Order> finishedOrders;

public:
  Restaurant();
  Restaurant(string name, Menu menu);
  void setName(string name);
  string getName();
  void setMenu(Menu menu);
  string showMenu();
  // place an order
  // returns the order id
  int place(Order order);
  void deliver(int orderID);
  void pay(int orderID);
};

#endif
