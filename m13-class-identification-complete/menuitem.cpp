#include <iostream>
#include <sstream>
#include <iomanip>
#include "menuitem.hpp"

using namespace std;

MenuItem::MenuItem() {
    name = "";
    price = 0;
    id = 0;
}
MenuItem::MenuItem(string name, double price) {
    this->name = name;
    this->price = price;
    id = generateID();
}

string MenuItem::show() {
    ostringstream oSS;
    oSS <<"Name: " << name << " | " << "Price: " << fixed << setprecision(2);
    return oSS.str();
}
