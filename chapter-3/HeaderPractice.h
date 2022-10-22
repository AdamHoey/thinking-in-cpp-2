/*
Create a header file (with an extension of ‘.h’). In this file, declare a group of functions by varying the argument 
lists and return values from among the following: void, char, int, and float. Now create a .cpp file that includes your
header file and creates definitions for all of these functions. Each definition should simply print out the function 
name, argument list, and return type so you know it’s been called. Create a second .cpp file that includes your header
file and defines int main( ), containing calls to all of your functions. Compile and run your program.
*/

/*
THIS IS THE HEADER FILE FOR CH3, EXERCISE 1
*/

// Check if the functions have already been declared when including the header file. 
#ifndef HEADERPRACTICE_H
#define HEADERPRACTICE_H

// Declare the functions which take and return the four specified types.
void voidFunc(int);

int intFunc(int, char);

char charFunc(char, float);

float floatFunc(float, int);

#endif // HEADERPRACTICE_H