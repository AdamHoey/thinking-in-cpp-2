/*
Create a program that opens a file and counts the whitespace-
separated words in that file.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // declare variable
    string word;
    string inputFile = "Hello-ex1.cpp";
    int totalWords = 0; //

    // create objects to handle input file
    ifstream in(inputFile);

    // count words
    while(in >> word)
        totalWords++;

    // display number of white-space separated words
    cout << "White-space separated words in " << inputFile << " totals " << totalWords << ".";

}