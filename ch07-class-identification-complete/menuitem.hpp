#ifndef MENUITEM_HPP
#define MENUITEM_HPP

#include <string>
#include <vector>

using std::vector;
using std::string;

class MenuItem {
private:
  static int lastId;
  int id;
  string name;
  double price;
  // generate global id
  int generateId();
public:
  MenuItem();
  MenuItem(string name, double price);
  string getName();
  int getId();
  double getPrice();
  string toString();
};

#endif