/**
 *        @file: selection_sort.cc
 *      @author: Parker Corbitt
 *        @date: November 06, 2023
 *       @brief: Implementation of selection sort and search algorithms
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

///function prototypes

/**
 * @brief Sorts an array using the selection sort algorithm.
 *
 * @param arr The array to be sorted.
 * @param size The size of the array.
 */
void selectionSort(int arr[], int size);

/**
 * @brief Performs a linear search on an array.
 * 
 */
void linearSearch();

/**
 * @brief Performs a binary search on a sorted array.
 *
 * @param arr The sorted array to search.
 * @param size The size of the array.
 * @param target The value to search for.
 * @return true if the target is found, false otherwise.
 */
bool binarySearch(int arr[], int size, int target);

int main(int argc, char const *argv[]) {

    int arr[10] = {5, 2, 6, 8, 1, 3, 9, 4, 7, 0};
    int size = 10;

    selectionSort(arr, size);

    if(binarySearch(arr, size, 5))
        cout << "Found 5!" << endl;
    else
        cout << "5 not found :(" << endl;

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    // linearSearch();

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

void linearSearch() {
    srand(time(nullptr));
    int arr[20];
    for (int x = 0; x <= 19; x++)
    {
        arr[x] = rand() % 20;
        cout << arr[x] << " ";
    }

    cout << endl;

    cout << "Enter number would you like to search for: ";
    int target;
    cin >> target;

    //Linear Search
    for(int i = 0; i < 20; i++)
    {
        if(arr[i] == target)
            cout << "found!";
            return;
    }

    cout << "not found :";
}

bool binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true; // Target found
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1; 
        }
    }

    return false; // Target not found
}