#include "myclass1.hpp"

MyClass1::MyClass1(int value) {
  this->value = value;  // setValue(value);
}

void MyClass1::printValue() const {
  cout << value << endl;
}

void MyClass1::calculation() {
  value *= 2;
}
