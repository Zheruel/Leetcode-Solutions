// 1528. Shuffle String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    string restoredString;
    int counter = 0;

    restoredString.resize(s.size());

    for (char c : s) {
        restoredString[indices[counter]] = c;
        counter++;
    }

    return restoredString;
}

int main()
{
    string s = "codeleet";
    vector<int> indices = { 4,5,6,7,0,2,1,3 };

    restoreString(s, indices);

    std::cout << "Hello World!\n";
}

