#include <iomanip>
#include <iostream>

using namespace std;

class TimeHrMn {
 private:
  int hours;  // int hours = 0; will set default value
  int minutes;

 public:
  TimeHrMn();                                // default constructor
  TimeHrMn(int timeHours, int timeMinutes);  // parameterized constructor
  void print() const;
  TimeHrMn operator+(TimeHrMn rhs);
  int getHours();
  int getMinutes();
  void setHours(int hours);
  void setMinutes(int minutes);
};

// initializer list is preferred
// only work with constructors
TimeHrMn::TimeHrMn() : hours(0), minutes(0){};
TimeHrMn::TimeHrMn(int hours, int minutes) : hours(hours), minutes(minutes) {}

// less preferred compared to the initializer list

// TimeHrMn::TimeHrMn(int hours, int minutes) {
//     this->hours = hours;
//     this->minutes = minutes;
// }

// Possible operators: -, /, %, *, <, >, ==, !=, <<, >>, ()
TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {
  TimeHrMn result;
  result.minutes = this->minutes + rhs.minutes;
  result.hours = this->hours + rhs.hours;
  if (result.minutes > 60) {
    result.minutes -= 60;
    result.hours++;
  }
  return result;
}

int TimeHrMn::getHours() { return hours; }
int TimeHrMn::getMinutes() { return minutes; }
void TimeHrMn::setHours(int hours) { this->hours = hours; }
void TimeHrMn::setMinutes(int minutes) { this->minutes = minutes; }
void TimeHrMn::print() const {
  cout << "Duration: " << hours << ":" << minutes << endl;
}
int main() {

  // + operator overloading for string class
  string s1 = "Hello";
  string s2 = "World";

  string s3;
  s3 = s1 + " " + s2;

  TimeHrMn t1(2, 30);  // triggers parameterized constructor
  TimeHrMn t2(1, 45);

  TimeHrMn t3;   // triggers default constructor, TimeHrMn t3(); TimeHrMn t3{}
  t3 = t1 + t2;  // expect t3(4, 15), the result is copied to the empty t3

  TimeHrMn t4;
  t4.setHours(1);
  t4.setMinutes(20);

  TimeHrMn timeHrMnArr1[10];  // triggers default constructor, local array

  for (int i = 0; i < 10; i++) {
    timeHrMnArr1[i].setHours(1);  // use setter to add contents to objects
    timeHrMnArr1[i].setMinutes(0);
  }

  TimeHrMn *timeHrMnArr2 = new TimeHrMn[10];  // 1d dynamic array of objects
  for (int i = 0; i < 10; i++) {
    timeHrMnArr2[i].setHours(1);
    timeHrMnArr2[i].setMinutes(0);
  }
  delete[] timeHrMnArr2;

  // Compared to 1d array of objects, the 1d array of object pointers
  // saves memory for partially filled array because you do not have to
  // allocate memory for unfilled positions.
  // dynamic 1d array of pointers
  // e.g. a array with capacity of 100 with 23 filled
  TimeHrMn **timeHrMnArr3 = new TimeHrMn *[100];
  int size = 23;
  // initialize all to nullptr
  for (int i = 0; i < 100; i++) {
    timeHrMnArr3[i] = nullptr;
  }
  // fill in values partially
  for (int i = 0; i < size; i++) {
    timeHrMnArr3[i] = new TimeHrMn(i + 1, 0);  // parameterized constructor
  }

  for (int i = 0; i < size; i++) {
    timeHrMnArr3[i]->print();  // call methods, pay attention to the ->
  }

  // release memory
  for (int i = 0; i < size; i++) {
    delete timeHrMnArr3[i];  // no [] because it is not an array
  }
  delete timeHrMnArr3;

  // 2d array of objects has the same syntax to declare the array (double *)
  // e.g. a 10 x 10 2d array
  TimeHrMn **timeHrMnArr4 = new TimeHrMn *[10];
  for (int i = 0; i < 10; i++) {
    timeHrMnArr4[i] = new TimeHrMn[10];  // default constructor
  }
  // this creates 10*10 = 100 empty objects

  // release memory
  for (int i = 0; i < 10; i++) {
    delete[] timeHrMnArr4[i];  // with [] because it is not an array
  }
  delete timeHrMnArr4;
}