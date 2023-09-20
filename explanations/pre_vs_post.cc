/**
 *        @file: pre_vs_post.cc
 *      @author: Parker Corbitt
 *        @date: September 15, 2023
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    string x[3] = {"bang", "bang2", "bang3"};

    //I tried showing that these were different in a previous SI session. This isn't true, they are semantically the same;

    /**Via Stack overflow
     * 
     * Loops function like this:
     * 1: Test the condition
     * 2: If false, terminate
     * 3: If true, execute the block
     * 4: Increment
     * 
     *  A visual representation is shown below
     * 
     */


    // for(int i = 0; i < 2; i++)
    // {
    //     cout << x[i] << endl;
    //     //cout << i << endl;
    // }

    // cout << endl;

    // for(int i = 0; i < 2; ++i)
    // {
    //     cout << x[i] << endl;
    //     //cout << i << endl;
    // }

    // for(int i = 0; i < 2; i)
    // {
    //     cout << "this is a loop" << endl;
    //     i++;
    // }

    // cout << "**********************************************" << endl;
    
    // int a = 8;
    
    // int b = ++a;

    // cout << "a = " << a << endl;
    // cout << "x = " << b << endl;

    // int d = 17;
    // int c = d++;

    // cout << "c = " << c << endl;
    // cout << "d = " << d << endl;

    return 0;
}// main