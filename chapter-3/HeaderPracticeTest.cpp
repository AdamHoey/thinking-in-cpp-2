/*
CH3, EXERCISE 1:
Create a header file (with an extension of ‘.h’). In this file, declare a group of functions by varying the argument
lists and return values from among the following: void, char, int, and float. Now create a .cpp file that includes your
header file and creates definitions for all of these functions. Each definition should simply print out the function 
name, argument list, and return type so you know it’s been called. Create a second .cpp file that includes your header
file and defines int main( ), containing calls to all of your functions. Compile and run your program.
*/

/*
THIS IS THE TEST PROGRAM FOR CH3, EXERCISE 1
*/

//Include the header file
#include "HeaderPractice.h"
#include <iostream>
using namespace std;

int main() {

// Call each of the functions, passing values of the appropriate type.
voidFunc(1);
intFunc(2,'a');
charFunc('b',1.1);
floatFunc(2.2,3);

}