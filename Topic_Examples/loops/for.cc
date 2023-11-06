/**
 *        @file: for.cc
 *      @author: Parker Corbitt
 *        @date: November 06, 2023
 *       @brief: A for loop is a loop that will continue to run as long as the condition is true.
 *               The condition is defined as a range of values.
 *               The condition is checked before the loop runs.
 *               The syntax is:
 * 
 *               for(initialization; condition; increment)
 *               {
 *                   //code
 *               }
 * 
 *  
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    //prints  0 1 2 3 4 5 6 7 8 9
   for(int i = 0; i < 10; i++)
   {
      cout << i << endl;
   }

    //prints 10 9 8 7 6 5 4 3 2 1
    for(int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }

    //prints 0 2 4 6 8 10 12 14 16 18
    for(int i = 0; i < 20; i += 2)
    {
        cout << i << endl;
    }

    //counts to 15, then exits the loop
    for(int i = 0; i < 30; i++)
    {
        if(i == 15)
        {
            break;
        }
    }

   return 0;
}// main