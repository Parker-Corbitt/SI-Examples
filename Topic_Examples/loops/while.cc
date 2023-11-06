/**
 *        @file: while.cc
 *      @author: Parker Corbitt
 *        @date: November 06, 2023
 *       @brief: A while loop is a loop that will continue to run as long as the condition is true.
 *               The condition is checked before the loop runs.
 *               The syntax is:
 *               while(condition)
 *               {
 *                   //code
 *               }
 *
 *               The following examples are some basic while loops.
 *               The first example prints "Hello World" 10 times.
 *               The second example counts down from 100 to 0.
 * 
 *                While loops are able to be used for almost anything that uses a condition
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[])
{

    // prints Hello World 10 times
    int i = 0;
    while (true)
    {
        cout << "Hello World" << endl;
        i++;
        if (i == 10)
        {
            break;
        }
    }

    // counts down from 100 to 0
    int j = 100;
    while (j != 0)
    {
        cout << j << endl;
        j--;
    }
    return 0;
} // main