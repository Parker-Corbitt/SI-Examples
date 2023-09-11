/**
 *        @file: program2.cc
 *      @author: Parker Corbitt
 *        @date: September 11, 2023
 *       @brief: This code depicts an error to be shown to students.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[])
{
    int x = 3;
    for (int i = 0; i < 2; ++i)
    {
        x = pow(x,x);
    }
    
    cout << x << endl;

    return 0;
} // main