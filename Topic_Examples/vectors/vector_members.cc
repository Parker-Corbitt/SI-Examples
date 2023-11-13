/**
 *        @file: vector_members.cc
 *      @author: Parker Corbitt
 *        @date: November 08, 2023
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[])
{

    vector<char> x;
    for(int i = 'a'; i < 'z'; i++)
    {
        auto tmp = i;
        x.push_back(tmp);
    }

    //x.swap
    //x.at()
    //x.size();
    //x.clear();
    //x.front();
    //x.pop_back();
    //x.push_back();

    for(int i = 0; i < x.size(); i++)
    {
        cout << x[i] << endl;
    }

    
    return 0;
} // main