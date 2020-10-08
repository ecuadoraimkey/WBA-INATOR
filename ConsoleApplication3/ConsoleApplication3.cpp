// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "checks.h"

using namespace std;

Checks check;

int main()
{
    string line;
    string x;
    std::ifstream file;

    file.open("censored", ios::binary);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            x = check.getPdbPath(line);
            if (x != "nada") {
                cout << x << '\n';
            }
        }
        file.close();
    }

    else cout << "Unable to open file";

    return 0;
}
