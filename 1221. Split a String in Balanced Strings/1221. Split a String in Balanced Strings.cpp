// 1221. Split a String in Balanced Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int balancedStringSplit(string s) {
    int balancedStringCount = 0, firstCharCount = 0, secondCharCount = 0;

    for (char c : s) {
        if (c == 'R') firstCharCount++;
        if (c == 'L') secondCharCount++;

        if (firstCharCount == secondCharCount) balancedStringCount++;
    }

    return balancedStringCount;
}

int main()
{
    std::cout << "Hello World!\n";
}
