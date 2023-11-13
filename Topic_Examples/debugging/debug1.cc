/**
 *        @file: debug1.cc
 *      @author: Parker Corbitt
 *        @date: November 13, 2023
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

/// function prototypes

int main(int argc, char const *argv[])
{

    ifstream instream;
    int element;
    int sum;

    instream.open("input.txt");
    if (instream.fail())
    {
        cout << "Error opening file" << endl;
        exit(1);
    }

    char delim;
    while (!instream.eof())
    {
        instream >> element;
        cout << element;
    }

    cout << "Sum: " << sum << endl;

    return 0;
} // main