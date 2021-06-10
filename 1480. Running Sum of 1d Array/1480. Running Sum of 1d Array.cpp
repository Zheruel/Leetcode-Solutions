// 1480. Running Sum of 1d Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        nums[i] += nums[i - 1];
    }

    return nums;
}

int main()
{
    vector<int> numsList;

    numsList.push_back(1);
    numsList.push_back(2);
    numsList.push_back(3);
    numsList.push_back(4);

    auto test = runningSum(numsList);
    cout << "done";
}
