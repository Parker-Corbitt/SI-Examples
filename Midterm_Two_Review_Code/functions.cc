/**
 *        @file: test.cc
 *      @author: Parker Corbitt
 *        @date: March 27, 2024
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

/// function prototypes
int count_occurrences(string str, char ch);
vector<string> split_string(string str, char delimiter);
bool is_prime(int num);
vector<int> sort_vector(vector<int> vec);
bool binary_search(vector<int> vec, int target);
vector<int> remove_duplicates(vector<int> vec);

int main(int argc, char const *argv[])
{
    // Test count_occurrences
    string testStr = "hello world";
    char testChar = 'l';
    int count = count_occurrences(testStr, testChar);
    cout << "Count of '" << testChar << "' in \"" << testStr << "\": " << count << endl;

    // Test split_string
    string str = "this,is,a,test";
    char delimiter = ',';
    vector<string> tokens = split_string(str, delimiter);
    cout << "Split string: ";
    for (string token : tokens)
    {
        cout << token << " ";
    }
    cout << endl;

    // Test is_prime
    int num = 17;
    bool prime = is_prime(num);
    cout << "Is " << num << " prime? " << (prime ? "Yes" : "No") << endl;

    // Test sort_vector
    vector<int> vec = {5, 3, 9, 1, 6};
    vector<int> sortedVec = sort_vector(vec);
    cout << "Sorted vector: ";
    for (int i : sortedVec)
    {
        cout << i << " ";
    }
    cout << endl;

    // Test binary_search
    vector<int> searchVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    bool found = binary_search(searchVec, target);
    cout << "Is " << target << " in the vector? " << (found ? "Yes" : "No") << endl;

    // Test remove_duplicates
    vector<int> vecWithDuplicates = {1, 2, 2, 3, 4, 4, 5};
    vector<int> vecWithoutDuplicates = remove_duplicates(vecWithDuplicates);
    cout << "Vector without duplicates: ";
    for (int i : vecWithoutDuplicates)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
} // main

int count_occurrences(string str, char ch)
{
    int count = 0;
    for (char c : str)
    {
        if (c == ch)
        {
            count++;
        }
    }
    return count;
}

vector<string> split_string(string str, char delimiter)
{
    vector<string> tokens;
    string token = "";
    for (char c : str)
    {
        if (c == delimiter)
        {
            if (!token.empty())
            {
                tokens.push_back(token);
                token = "";
            }
        }
        else
        {
            token += c;
        }
    }
    if (!token.empty())
    {
        tokens.push_back(token);
    }
    return tokens;
}

bool is_prime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

vector<int> sort_vector(vector<int> vec)
{
    for (size_t i = 0; i < vec.size(); i++)
    {
        for (size_t j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] > vec[j])
            {
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
    return vec;
}

// Binary Search Function
bool binary_search(vector<int> vec, int target)
{
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (vec[mid] == target)
        {
            return true;
        }
        if (vec[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}

vector<int> remove_duplicates(vector<int> vec)
{
    for (size_t i = 0; i < vec.size(); ++i)
    {
        for (size_t j = i + 1; j < vec.size();)
        {
            if (vec[i] == vec[j])
            {
                vec.erase(vec.begin() + j);
            }
            else
            {
                ++j;
            }
        }
    }
    return vec;
}