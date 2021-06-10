// 1672. Richest Customer Wealth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0;
    int wealthTracker = 0;

    for (auto accountVector : accounts) {
        for (auto accountValue : accountVector) {
            wealthTracker += accountValue;
        }

        if (wealthTracker > maxWealth) maxWealth = wealthTracker;
        wealthTracker = 0;
    }

    return maxWealth;
}

int main()
{
    cout << "Done";
}