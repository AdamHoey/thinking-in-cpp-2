/*
EXERCISE 3.2:
Write a program that uses two nested for loops and the modulus operator (%) to 
detect and print prime numbers (integral numbers that are not evenly divisible 
by any other numbers except for themselves and 1).
*/

/* Version 1.0: Basic version. No error capture for invalid input */
/* Version 1.1: Removed test for division by 1, since it is always the case.*/
/* Version 1.2: Groups output values by lines of 10 items in a field length of 8.*/
/* Version 1.3: Added introduction text and optimized testing loop*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int userInt, divisorCount;
    int lineItem = 0; // holds number of items printed to a line

    // Introduce the program and solicit user input.
    cout << "This program will print out all of the prime numbers from 1 up to" << endl;
    cout << "an integer of your choosing." << endl;
    cout << "Enter an integer: " << endl;
    cin >> userInt;

    for(int i = 1; i <= userInt; i++) {
        divisorCount = 0;
        for(int d = 2; d <= i; d++) { // 1 is always a divisor and doesn't need to be tested
            if((i % d) == 0) divisorCount++;
        }
        if(divisorCount == 1) {// prime numbers have only 1 and themselves as a divisor
            printf("%8d", i);
            lineItem++;
            if(lineItem == 10) { // print newline and reset lineItem every 10 values
                cout << endl;
                lineItem = 0;
            }
        }
    }

} //end main