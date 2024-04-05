/**
 *        @file: hand_tracing.cc
 *      @author: Parker Corbitt
 *        @date: September 25, 2023
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[])
{

    int n = 256;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    cout << sum << endl;

    return 0;
} // main