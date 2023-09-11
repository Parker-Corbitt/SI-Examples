/**
 *        @file: program3.cc
 *      @author: Parker Corbitt
 *        @date: September 11, 2023
 *       @brief: Some code to depict some errors within code.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[])
{

    int x = 37;
    x + 74;
    if (x = 121)
    {
        cout << "Oreos in milk is the only true option" << endl;
    }
    else if(x = 111)
    {
        cout << "Oreos are the worst kind of cookie to ever exist. Bring back Hydrox over Nabisco"
            << endl;
    }
    else
    {
        cout << "Oreos in water is only for emergencies when you don't have milk" << endl;
    }
    return 0;
} // main