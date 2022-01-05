#include <iostream>

using namespace std;


class TimeHrMn {
public:
   TimeHrMn();
   TimeHrMn(int timeHours, int timeMinutes);
   void print() const;
   TimeHrMn operator+(TimeHrMn rhs);
   int getHours();
   int getMinutes();
   void setHours(int hours);
   void setMinutes(int minutes);
private:
   int hours;
   int minutes;
};

// initializer list (preferred way)
TimeHrMn::TimeHrMn(): hours(0), minutes(0) {};
TimeHrMn::TimeHrMn(int hours, int minutes): hours(hours), minutes(minutes) {}

// TimeHrMn::TimeHrMn(int hours, int minutes) {
//     this->hours = hours;
//     this->minutes = minutes;
// }

// Possible operators: -, /, %, *, <, >, ==, !=, <<, >>, ()
TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {
    int newMin = this->minutes + rhs.minutes;
    int newHour = this->hours + rhs.hours;
    if (newMin > 60) {
        newMin -= 60;
        newHour++;
    }
    TimeHrMn result;
    result.minutes = newMin;
    result.hours = newHour;
    return result;
}

void TimeHrMn::print() const{
  cout << "Hours: " << hours << " Minutes: " << minutes << endl;
}

int main() {
    string t1 = "Hello";
    string t2 = "World";

    string t3;
    t3 = t1 + " " + t2;

    TimeHrMn t1(2, 30);  // trigger parameterized constructor
    TimeHrMn t2(1, 45);

    TimeHrMn t3;  // trigger default constructor, TimeHrMn t3(); TimeHrMn t3{}
    t3 = t1 + t2;  // expect t3(4, 15)

    TimeHrMn t4;  // trigger default constructor
    t4.setHours(1);
    t4.setMinutes(20);

    TimeHrMn timeHrMnArr1[10];  // trigger default constructor

    for (int i = 0; i < 10; i++) {
        timeHrMnArr1[i].setHours(1);
        timeHrMnArr1[i].setMinutes(0);
    }

    TimeHrMn *timeHrMnArr2 = new TimeHrMn[10];  // dynamic 1d array of objects
    for (int i = 0; i < 10; i++) {
        timeHrMnArr2[i].setHours(1);
        timeHrMnArr2[i].setMinutes(0);
    }
    delete [] timeHrMnArr2;

    // save memory for partially filled array
    TimeHrMn **timeHrMnArr3 = new TimeHrMn *[10];  // dynamic 1d array of pointers
    for (int i = 0; i < 10; i++) {
        timeHrMnArr3[i] = new TimeHrMn(i + 1, 0);
    }
    for (int i = 0; i < 10; i++) {
        timeHrMnArr3[i]->print();
    }

}