/**
 *    @file: potion.cc
 *    @author: Parker Corbitt
 *    @date: April 02, 2025
 *    @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

/// function prototypes

struct Coaster {
    string name;
    int capacity;
    double speed;
};

/**
 * @brief Prints all members of "coasters"
 * 
 * @param coaster roller coaster object
 */
void printCoaster(const Coaster &coaster);

vector<Coaster> load_coasters(const string &filename);

int main(int argc, char const *argv[])
{

    Coaster a;
    a.name = "Super Coaster";
    a.capacity = 1;
    a.speed = 1024.69420;

    printCoaster(a);

    vector<Coaster> allCoasters = load_coasters("coaster.txt");

    return 0;
} // main

void printCoaster(const Coaster &coaster)
{
    cout << "Coaster name: " << coaster.name << endl;
    cout << "Coaster capacity: " << coaster.capacity << endl;
    cout << "Coaster Speed: " << coaster.speed << endl;
}

vector<Coaster> load_coasters(const string &filename)
{
    ifstream ins;
    ins.open(filename);
    if(ins.fail())
    {
        cout << "Error opening file" << endl;
        exit(1);
    }

    string name;
    int capacity;
    double speed;
    vector<Coaster> coasters;
    Coaster c;

    while(ins >> name >> capacity >> speed)
    {
        // cout << name << " " << capacity << " " << speed << endl;
        c.name = name;
        c.speed = speed;
        c.capacity = capacity;
        coasters.push_back(c);
        printCoaster(c);
    }
    
    return coasters;
}
