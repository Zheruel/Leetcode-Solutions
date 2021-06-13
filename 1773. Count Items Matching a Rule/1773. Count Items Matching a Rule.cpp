// 1773. Count Items Matching a Rule.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int ruleIndex, matchCounter = 0;

    if (ruleKey[0] == 't') ruleIndex = 0;
    else if (ruleKey[0] == 'c') ruleIndex = 1;
    else ruleIndex = 2;

    for (vector<string>& item : items) {
        if (item[ruleIndex][0] == ruleValue[0]) {
            matchCounter++;
        }
    }

    return matchCounter;
}

int main()
{
    std::cout << "Hello World!\n";
}