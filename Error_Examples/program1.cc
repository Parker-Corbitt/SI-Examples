/**
 *        @file: Error_1.cc
 *      @author: Parker Corbitt
 *        @date: September 11, 2023
 *       @brief: A short program that is totally, 100% written correctly. There couldn't possible
 *               be an error hidden somewhere in here. No way!
 */

#include <iostream>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

   int x = 0;

   for (int i; i < 10; i++)
   {
      x += 1;
      if(i == 10)
      {
         cout << x << endl;
      }
   }

   cout << x << endl;
   
   return 0;
}// main