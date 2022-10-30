/*
EXERCISE 3.2:
Write a program that uses two nested for loops and the modulus operator (%) to 
detect and print prime numbers (integral numbers that are not evenly divisible 
by any other numbers except for themselves and 1).
*/

/* Version 1.0: Basic version. No error capture for invalid input */
/* Version 1.1: Removed test for division by 1, since it is always the case.*/

#include <iostream>
using namespace std;

int main() {
    
    int userInt, divisorCount;

    cout << "Enter an integer: " << endl;
    cin >> userInt;

    for(int i = 1; i <= userInt; i++) {
        divisorCount = 0;
        for(int d = 2; d <= i; d++) { // 1 is always a divisor and doesn't need to be tested
            if((i % d) == 0) divisorCount++;
        }
        if(divisorCount == 1) // prime numbers have only 1 and themselves as a divisor
            cout << i << endl;
    }

} //end main