/**
 * Random number generation
 */


#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    char cont = 'y';
    int val;

    // even numbers between 2 and 100
    // possible values 50 even numbers
    // gap is 2
    // starting from 2
    while (cont == 'y' || cont == 'Y') {
        val = ((rand() % 50) * 2 + 2);
        cout << "Dice roll: " << val << endl;
        cout << "Do you want to continue? (y/n)\n";
        cin >> cont;
    }

   return 0;
}