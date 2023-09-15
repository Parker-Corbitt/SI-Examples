/**
 *        @file: using_assignment_as_boolean.cc
 *      @author: Parker Corbitt
 *        @date: September 15, 2023
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[])
{

    int a = 7;

    if (a = 9)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    int b = 7;

    if (b = 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    int c;

    if (c = 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    int d = 0;
    
    if(d = 9)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }



    /**
     * effectively, when evaluating a boolean expression with an assignment, its the same as using an int as the bool value
     * as a reminder, anything other than 0 within c++ is true. 
     */
    return 0;
} // main