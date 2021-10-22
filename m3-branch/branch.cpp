#include <iostream>

using namespace std;

char percentToLetterGrade1(int percentGrade);
char percentToLetterGrade2(int percentGrade);
char percentToLetterGrade3(int percentGrade);
char percentToLetterGrade4(int percentGrade);

int main() {
  // percent grade to letter grade
  int percentGrade;

  cout << "Please input your percent grade: ";
  cin >> percentGrade;  // assume that user will give a valid value

  cout << "Your letter grade is " << percentToLetterGrade2(percentGrade) << endl;

  return 0;
}

// switch version
// good at math
char percentToLetterGrade1(int percentGrade) {
  switch (percentGrade / 10) {
    case 10:
    case 9:
      return 'A';
    case 8:
      return 'B';
    case 7:
      return 'C';
    case 6:
      return 'D';
    default:
      return 'F';
  }
}

// nested if-else version
// least comparison
char percentToLetterGrade2(int percentGrade) {
  if (percentGrade >= 70)
    if (percentGrade >= 90)
      return 'A';
    else if (percentGrade >= 80)
      return 'B';
    else
      return 'C';
  else if (percentGrade >= 60)
    return 'D';
  else
    return 'F';
}

// flat if-else version
// nested only in else block
// most readable
// less but not least comparisons
char percentToLetterGrade3(int percentGrade) {
  if (percentGrade >= 90)
    return 'A';
  else if (percentGrade >= 80)
    return 'B';
  else if (percentGrade >= 70)
    return 'C';
  else if (percentGrade >= 60)
    return 'D';
  else
    return 'F';
}

// flat if version
// no implicit condition
// also most readable
// more comparisons
char percentToLetterGrade4(int percentGrade) {
  if (percentGrade >= 90)
    return 'A';
  if (percentGrade < 90 && percentGrade >= 80)
    return 'B';
  if (percentGrade < 80 && percentGrade >= 70)
    return 'C';
  if (percentGrade < 70 && percentGrade >= 60)
    return 'D';
  // if (percentGrade < 60)
  return 'F';
}
