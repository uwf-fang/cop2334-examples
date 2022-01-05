#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <cstring>
#include <cctype>

using namespace std;

char *toUpper(char *cstr) {
  int i = 0;
  while (cstr[i] != '\0') {
    cstr[i] = toupper(cstr[i]);
    i++;
  }
  return cstr;
}

int main() {
  char cstr1[100];  // capacity is 100, can store a C string of length up to 99

  strcpy(cstr1, "abc");

  cout << toUpper(cstr1);

  return 0;
}