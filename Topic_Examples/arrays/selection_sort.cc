/**
 *        @file: selection_sort.cc
 *      @author: Parker Corbitt
 *        @date: November 06, 2023
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

void selectionSort(int arr[], int size);    //sorts an array using selection sort

int main(int argc, char const *argv[]) {

    int arr[10] = {5, 2, 6, 8, 1, 3, 9, 4, 7, 0};
    int size = 10;

    selectionSort(arr, size);

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

   return 0;
}// main

void selectionSort(int arr[], int size) {
   int minIndex;
   int minValue;
   for (int i = 0; i < size; i++) {
      minIndex = i;
      minValue = arr[i];
      for (int j = i; j < size; j++) {
         if (arr[j] < minValue) {
            minValue = arr[j];
            minIndex = j;
         }
      }
      arr[minIndex] = arr[i];
      arr[i] = minValue;
   }
}