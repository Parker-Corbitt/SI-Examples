/**
 *        @file: mirror_array.cc
 *      @author: Parker Corbitt
 *        @date: November 01, 2023
 *       @brief: This program mirrors a 2d array horizontally
 * 
 * Some things to rememeber:
 * Arrays are always passed by reference
 * You must always track the size of an array, since there aren't any built in functions to do so
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/// function prototypes
void flipArray(int arr[], int size);

int main(int argc, char const *argv[])
{
    //decalr array, initialize it
    int arr[10][10];
    int size = 10;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = count;
            count++;
        }
    }

    //print array
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }

    //mirror array
    for (int i = 0; i < size; i++)
    {

        flipArray(arr[i], size);
    }

    //print array
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
} // main

/**
 * @brief This function flips an array horizontally
 * 
 * @param arr - the array to flip
 * @param size - the size of the array
 */
void flipArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

//The flip array function works by swapping the first and last,
//then the second and second to last, and so on.. until the middle is reached.
//This is done by using a for loop that runs until the middle is reached.
//The middle is reached when the index is equal to the size divided by 2.   

//REMEMBER: You only go to the middle, not all the way to the end.  Thi is because
//if you go all the way to the end, you will swap the values back to their original
//positions.  This is because you are swapping the first and last, then the last and first,
//then the second and second to last, then the second to last and second, and so on.
//This means that you will swap the values back to their original positions.

//Also, Size - i - 1 is used to get the index of the last value.  This is because
//the size is 10, but the index is 9.  This is because the index starts at 0, not 1.
//This means that the last index is 9, not 10.  This is why you subtract 1 from the size.

