/*
Student Name: Arianna Bikombe
Date: April 8, 2021
Course: CSCI175N
Lab Assignment: Lab08-01-OutputFile
Project Name: Output File
File Name: Lab08-01-OutputFile.cpp
Description: Reads file and counts/sums/averages numbers, then outputs into new file.
Limitations: Doesn't do very much.
Credits: Not Applicable
 */

#include <iostream>
#include <fstream>
using namespace std;

// Function prototype
void myName();

int main()
{

    int i, number;
    double newNumber, average;

    newNumber = 0;

    myName();

    // file read open
    ifstream infile;
    infile.open("Random.txt");

    // test for file open errors
    if (infile) {
        for (i = 0; infile >> number; i++) {
            newNumber = newNumber += number;    // count formula
        }
        cout << "Number of numbers: " << i << endl; // count
        cout << "Sum of the numbers: " << newNumber << endl;    // sum
        average = newNumber / i;
        cout << "Average of the numbers: " << average << endl;    // average

        infile.close(); // file close

        // skip line
        cout << endl;

        // file write open
        ofstream outfile;
        outfile.open("Results.txt");

        outfile << "Number of numbers: " << i << endl; // count
        outfile << "Sum of the numbers: " << newNumber << endl;    // sum
        outfile << "Average of the numbers: " << average << endl;    // average

        outfile.close(); // file close

        cout << "Data has been saved to a file" << endl;
    }
    else {
        cout << "Error opening the file." << endl;  // test for file open error
    }

    // skip line
    cout << endl;

    system("pause");

    return 0;
}

//*************************************************
// The myName function outputs my name, course, & *
// Program #, and a blank line as typical for all *
// programs.                                      *
//*************************************************

void myName() {

    // Print out your name and course
    cout << "Arianna Bikombe\n";
    cout << "CSCI175N\n";
    cout << "Lab08-01-OutputFile\n" << endl;

}

/*

test 1

Arianna Bikombe
CSCI175N
Lab08-01-OutputFile

Number of numbers: 200
Sum of the numbers: 105527
Average of the numbers: 527.635

Data has been saved to a file

Press any key to continue . . .

*/

/*

test 2

Arianna Bikombe
CSCI175N
Lab08-01-OutputFile

Error opening the file.

Press any key to continue . . .

*/