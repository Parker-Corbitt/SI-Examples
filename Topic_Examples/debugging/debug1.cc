/**
 *        @file: debug1.cc
 *      @author: Parker Corbitt
 *        @date: November 13, 2023
 *       @brief: Needs extra implementation
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <cctype>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[])
{

    ifstream instream;
    string element;
    int sum = 0;

    instream.open("input.txt");
    if (instream.fail())
    {
        cout << "Error opening file" << endl;
        exit(1);
    }
    string number;

    while (instream >> element)
    {

        bool valid = true;
        for (int i = 0; i < element.length(); i++)
        {
            if (!isdigit(element[i]))
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            cout << "Adding valid number: " << element << std::endl;
            sum += stoi(element);
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
} // main