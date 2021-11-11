#include "myclass1.hpp"

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