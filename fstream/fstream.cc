/**
 *        @file: fstream.cc
 *      @author: Parker Corbitt
 *        @date: October 15, 2023
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
    instream.open("text.txt");
    if(instream.fail())
    {
        cout << "Unable to open file" << endl;
        return 0;
    }

    string x;
    // getline(instream, x);

    // cout << x << endl;

    // getline(instream, x);
    // cout << x << endl;
    string whole_file;
    while(!instream.eof())
    {
        whole_file += instream.get();

    }

    cout << whole_file << endl;

    instream.close()    


    return 0;
} // main