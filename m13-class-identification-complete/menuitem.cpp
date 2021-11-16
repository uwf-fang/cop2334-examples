#include "menuitem.hpp"

#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

// initialize static instance variable
int MenuItem::lastId = 0;

MenuItem::MenuItem() {
  name = "";
  price = 0;
  id = 0;
}
MenuItem::MenuItem(string name, double price) {
  this->name = name;
  this->price = price;
  id = generateId();
}

string MenuItem::toString() {
  ostringstream oSS;
  oSS << "Name: " << name << " | "
      << "Price: " << fixed << setprecision(2);
  return oSS.str();
}

int MenuItem::generateId() { return ++lastId; }

string MenuItem::getName() { return name; }
int MenuItem::getId() { return id; }
double MenuItem::getPrice() { return price; }
