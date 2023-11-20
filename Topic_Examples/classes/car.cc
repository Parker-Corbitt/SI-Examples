/**
 *        @file: car.cc
 *      @author: Parker Corbitt
 *        @date: November 20, 2023
 *       @brief: Add Description
 */

#include "car.h"

///function prototypes

car::car(/* args */)
{
    color_value[0] = 255;
    color_value[1] = 255;
    color_value[2] = 255;
}

int* car::get_color()
{
    return color_value;
}

void car::set_color(int r, int g, int b)
{
    color_value[0] = r;
    color_value[1] = g;
    color_value[2] = b;
}
