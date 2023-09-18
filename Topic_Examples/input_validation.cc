/**
 *        @file: input_validation.cc
 *      @author: Parker Corbitt
 *        @date: September 18, 2023
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    ifstream instream;
    instream.open("ascii.txt");
    if(instream.fail())
    {
        cout << "Please verify ascii.txt exists, then rerun the program." << endl;
        return 0;
    }
    
    cout << "Enter 5 please: ";
    int x;
    cin >> x;

    if(x = 5)
    {
        cout << "Thank you, this instruction was easy!" << endl;
    }
    else
    {
        cout << "You had one job." << endl;
    }

    /**int i = 0;
    string ascii;
    while(x != 3)
    {
        cout << "I'm not going to stop until you do this right." << endl;
        cout << "Try again: ";
        cin >> x;
        i++;
        if(i > 3)
        {
            cout << "Now you're just being stubborn. Two can play that game." << endl;
            while(!instream.eof())
            {
                getline(instream, ascii);
                cout << ascii << endl;
            }
            cout << "Go touch grass." << endl;
            return 0;
        }
    }**/
    return 0;
}// main