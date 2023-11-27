/**
 *        @file: hw1.cc
 *      @author: Parker Corbitt
 *        @date: November 20, 2023
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "car.h"



using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

   car a = car();
   a.get_color();
   a.set_color(133, 146, 273);
   a.print_color();
   return 0;
}// main