/**
 *        @file: Hello_World
 *      @author: Parker Corbitt
 *        @date: August 30, 2023
 *       @brief: This program is just to quickly test that the software installations are working correctly.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {

   string x = "Thank goodness that just  worked";
   if(x.find('t'))
   {
      cout << "BANG" << endl;
   }
   return 0;
}
