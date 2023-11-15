/**
 *        @file: test.cc
 *      @author: Parker Corbitt
 *        @date: November 13, 2023
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

/// function prototypes

void walk(vector<int> &v);
void walk2(vector<int> &v);
void walk3(vector<int> &v);
void walk4(vector<int> &v);
void walk5(vector<int> &v);
void walk6(vector<int> &v);

int main(int argc, char const *argv[])
{

    vector<int> v = {1, 2, 3, 4, 5};
    walk(v);
    cout << endl;
    walk2(v);
    cout << endl;
    walk3(v);
    cout << endl;
    walk4(v);
    cout << endl;
    walk5(v);
    cout << endl;
    walk6(v);
    cout << endl;

    return 0;
} // main

void walk(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

void walk2(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        for (int j = 0; j < v.size() + 3; j++)
        {
            cout << v[j] << endl;
        }
    }
}

void walk3(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        for (int j = 0; j < v.size(); j++)
        {
            cout << v[j] << endl;
            for (int k = 0; k < v.size() - 10; k++)
            {
                cout << v[k] << endl;
            }
        }
    }
}

void walk4(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        for (int j = 0; j < v.size(); j++)
        {
            cout << v[j] << endl;
            for (int k = 0; k = v.size(); k++)
            {
                cout << v[k] << endl;
                for (int l = 0; l < v.size(); l++)
                {
                    cout << v[l] << endl;
                }
            }
        }
    }
}

void walk5(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        for (int j = 0; j < v.size(); j++)
        {
            cout << v[j] << endl;
            for (int k = 0; k < v.size(); k++)
            {
                cout << v[k] << endl;
                for (int l = 0; l < v.size(); l++)
                {
                    cout << v[l] << endl;
                    for (int m = 0; m < v.size(); m++)
                    {
                        cout << v[m] << endl;
                    }
                }
            }
        }
    }

    while(true)
    {
        cout << "LOOP" << endl;
    }
}

void walk6(vector<int> &v)
{
    exit(0);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        for (int j = 0; j < v.size(); j++)
        {
            cout << v[j] << endl;
            for (int k = 0; k < v.size(); k++)
            {
                cout << v[k] << endl;
                for (int l = 0; l < v.size(); l++)
                {
                    cout << v[l] << endl;
                    for (int m = 0; m < v.size(); m++)
                    {
                        cout << v[m] << endl;
                        for (int n = 0; n < v.size(); n++)
                        {
                            cout << v[n] << endl;
                        }
                    }
                }
            }
        }
    }
}