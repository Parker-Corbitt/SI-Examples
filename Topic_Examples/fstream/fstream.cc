/**
 *        @file: fstream.cc
 *      @author: Parker Corbitt
 *        @date: October 15, 2023
 *       @brief: This file contains an example of how to use file streams
 */

#include <ios>
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
        exit(-1);
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
        exit(-1);
    }
    outstream << whole_file;

    ifstream instream_two;
    instream.open("text2.txt");
    if (instream_two.fail())
    {
        cout << "Unable to open text2.txt" << endl;
        exit(-1);
    }

    ofstream outstream_two;
    outstream_two.open("output2.txt");
    if (outstream_two.fail())
    {
        cout << "Unable to open file" << endl;
        exit(-1);
    }

    string second_file;

    //This while loop condition is better because it checks the success of the read
    //rather than the slightly misleading .eof() flag. .eof() only checks to see if 
    //you have tried to read PAST the end of the file, which commonly results in some
    //form of error
    while (instream >> second_file)
    {
        outstream_two << second_file << ":";
    }

    return 0;
} // main
