#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void copyFile(const string &sourceFile, const string &destinationFile);

int main()
{
    string sourceFile, destinationFile;
    sourceFile = "test1.txt";
    destinationFile = "test2.txt";
    copyFile(sourceFile, destinationFile);
}

void copyFile(const string &sourceFile, const string &destinationFile)
{
    ifstream src;
    ofstream dst;

    src.open(sourceFile);

    if (!src)
    {
        cerr << "Error: could not open source file " << sourceFile << "\n";
        return;
    }

    dst.open(destinationFile);

    if (!dst)
    {
        cerr << "Error: could not open destination file " << destinationFile << "\n";
        return;
    }

    string line;
    while (getline(src, line))
    {
        dst << line << '\n';
    }

    src.close();
    dst.close();
}