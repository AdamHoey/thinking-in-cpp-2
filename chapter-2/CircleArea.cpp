/*
Using Stream2.cpp and Numconv.cpp as guidelines, create a program that asks 
for the radius of a circle and prints the area of that circle. You can just 
use the ‘*’ operator to square the radius. Do not try to print out the value
as octal or hex (these only work with integral types).
*/

#include <iostream>
using namespace std;

int main() {

    float radius, area;

    cout << "Enter a radius: ";
    cin >> radius;

    cout << "The area of a circle with a radius of " << radius << " is " << 3.14159 *
        radius * radius << endl;

}