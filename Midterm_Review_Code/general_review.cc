/**
 *        @file: integer_division.cc
 *      @author: Parker Corbitt
 *        @date: October 15, 2023
 *       @brief: This code provides a number of examples
 *                  for topics leading up to the CS2400 Midterm
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[])
{

    // Integer/Floating Point Division
    int x = 3;
    float y = 4.7;
    int z = y / x;
    // cout << z << endl;

    // cout << "*************" << endl;

    // String Concatenation
    string a = "Hello";
    string b = "World";
    string c = a + " " + b;
    // cout << c << endl;

    // Alphabet Storing
    char letter = 'a';
    string alphabet;
    for (int i = 'a'; i <= 'z'; i++)
    {
        alphabet += letter;
        letter++;
    }
    // cout << alphabet << endl;

    // Factors of 100
    int num = 100;
    int num_factors = 0;
    for (int i = 3; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            num_factors++;
        }
        else if (i % 5 == 0)
        {
            num_factors++;
        }
    }
    // cout << num_factors << endl;

    // Reverse String
    // string str;
    // cout << "Enter a string: ";
    // getline(cin, str);
    // string rev_str;
    // for (int i = str.length() - 1; i >= 0; i--)
    // {
    //     rev_str += str[i];
    // }
    // cout << rev_str << endl;

    // Code Output
    int n = 3;
    while (n >= 0)
    {
        cout << n * n << endl;
        --n;
    }

    cout << n << endl;

    while (n < 4)
        cout << ++n << endl;

    cout << n << endl;

    while (n >= 0)
        cout << (n /= 2) << endl;

    return 0;
} // main