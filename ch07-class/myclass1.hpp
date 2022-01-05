#ifndef MYCLASS1_HPP
#define MYCLASS1_HPP

#include <iostream>

using std::cout;
using std::endl;

class MyClass1 {
  int value;
  void calculation(); // private helper function
 public:
  // default constructor
  MyClass1() {
    value = 10;
  }
  // parameterized constructor
  MyClass1(int value);
  // destructor
  ~MyClass1(){}  // best place to release memory for dynamic data
  void printValue() const;
  // inline getter
  int getValue() {return this->value;};
  // inline
  // setter/mutator
  void setValue(int value) {
    this->value = value;
    // (*this).value = value;
  }
};  // ; here is mandatory


#endif