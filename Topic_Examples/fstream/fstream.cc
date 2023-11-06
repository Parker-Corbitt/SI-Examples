/**
 *        @file: fstream.cc
 *      @author: Parker Corbitt
 *        @date: October 15, 2023
 *       @brief: This file contains an example of how to use file streams
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
    instream.open("text.txt");
    if (instream.fail())
    {
        cout << "Unable to open file" << endl;
        return 0;
    }

    string whole_file;
    while (!instream.eof())
    {
        whole_file += instream.get();
    }

    cout << whole_file << endl;

    instream.close();

    ofstream outstream;
    outstream.open("output.txt");
    if (outstream.fail())
    {
        cout << "Unable to open file" << endl;
        return 0;
    }
    outstream << whole_file;

    return 0;
} // main