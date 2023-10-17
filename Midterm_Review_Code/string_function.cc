/**
 *        @file: string_function.cc
 *      @author: Parker Corbitt
 *        @date: October 15, 2023
 *       @brief: This code performs a set of operations on a string. Trace the output.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[])
{

    string x = "Hello";
    char tmp = x[0];
    x[0] = x[x.size() - 1];
    x[x.length() - 1] = tmp;

    cout << x << endl;
    for (int i = 0; i < x.length(); i++)
    {
        if(i != 0 && i != x.length() - 1)
        {
            x[i] = '*';
        }
    }

    cout << setfill('z') << setw(15) << x << endl;
    return 0;
} // main