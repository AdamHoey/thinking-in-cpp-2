/*
Create a header file (with an extension of ‘.h’). In this file, declare a group of functions by varying the argument
lists and return values from among the following: void, char, int, and float. Now create a .cpp file that includes your
header file and creates definitions for all of these functions. Each definition should simply print out the function 
name, argument list, and return type so you know it’s been called. Create a second .cpp file that includes your header
file and defines int main( ), containing calls to all of your functions. Compile and run your program.
*/

/*
THIS IS THE FUNCTION DEFINITION FILE FOR CH3, EXERCISE 1
*/

#include "HeaderPractice.h"
#include <iostream>
using namespace std;

void voidFunc(int intVar) {
    cout << "Function name: voidFunc\nArgument list: NULL\nReturn type: void" << endl;
    cout << "No value passed" << endl;
}

int intFunc(int intVar, char charVar) {
    cout << "Function name: intFunc\nArgument list: int intVar, char charVar\nReturn type: int" << endl;
    cout << "Values passed: " << intVar << ", " << charVar << endl;
    return intVar;
}

char charFunc(char charVar, float floatVar) {
    cout << "Function name: charFunc\nArgument list: char charVar, float floatVar\nReturn type: char" << endl;
    cout << "Values passed: " << charVar << ", " << floatVar << endl;
    return charVar;
}

float floatFunc(float floatVar, int intVar) {
    cout << "Function name: floatFunc\nArgument list: float floatVar, int intVar\nReturn type: float" << endl;
    cout << "Values passed: " << floatVar << ", " << intVar << endl;
    return floatVar;
}