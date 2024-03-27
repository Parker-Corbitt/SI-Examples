/**
 *        @file: session_loops.cc
 *      @author: Parker Corbitt
 *        @date: February 08, 2024
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[])
{

    // initialize, condition, increment
    for (int i = 0; i < 47; i++)
    {
        cout << "Have a nice day." << endl;
        if(i == 15)
        {
            break;
        }
    }

    for (int i = 0; i < 47; ++i)
    {
        
    }

    for(char letter = 'a'; letter <= 'z'; letter++)
    {
        cout << "blammo " << letter - 65 << endl;
    }

    return 0;
} // main