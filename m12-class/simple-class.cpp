#include <iostream>
using namespace std;

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

MyClass1::MyClass1(int value) {
  this->value = value;  // setValue(value);
}

void MyClass1::printValue() const {
  cout << value << endl;
}

void MyClass1::calculation() {
  value *= 2;
}

struct MyClass2 {
  int value;
  void printValue();
};

int main() {

  // local object
    // calls the default contructor, same as MyClass1 myClass1a();
  MyClass1 myClass1a;
    // calls the parameterized contructor
  MyClass1 myClass1b(5);
  MyClass1 *myClass1Pointer;
  myClass1a.printValue();
  myClass1a.setValue(15);
  cout << "test getValue: " << myClass1a.getValue() << endl;
  myClass1Pointer = &myClass1a;
  myClass1Pointer->setValue(20);
  myClass1Pointer->printValue();  // (*myClass1Pointer).printValue()
  // myClass1a.value = 10;  // forbidden

  // dynamic object
  MyClass1 *myClass1Pointer1;
  MyClass1 *myClass1Pointer2;
    // calls the default contructor, same as MyClass1 myClass1a();
  myClass1Pointer1 = new MyClass1;
    // calls the parameterized contructor
  myClass1Pointer2 = new MyClass1(5);
  // use the object
  myClass1Pointer1->setValue(11);
  myClass1Pointer1->printValue();
  myClass1Pointer2->printValue();
  // release the memory
  delete myClass1Pointer1;
  delete myClass1Pointer2;
}