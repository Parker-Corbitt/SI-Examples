/**
 *        @file: Sentinel.cc
 *      @author: Parker Corbitt
 *        @date: September 25, 2023
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    string x;
    cin >> x;
    
    while (x != "@@@")
    {
        cout << x << " ";
        cin >> x;
        
    }
    return 0;
}// main