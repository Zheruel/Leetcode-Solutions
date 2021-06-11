// 1512. Number of Good Pairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    map<int, int> pairsMap;
    int numOfPairs = 0;

    for (int num : nums) {
        pairsMap[num] += 1;
    }

    for (auto num : pairsMap) {
        numOfPairs += ((num.second) * (num.second - 1)) / 2;
    }

    return numOfPairs;
}

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);

    auto test = numIdenticalPairs(nums);

    cout << "Done \n";
}