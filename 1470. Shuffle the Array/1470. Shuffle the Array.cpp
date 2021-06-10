// 1470. Shuffle the Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> shuffledNums;

    for (int i = 0; i < nums.size() / 2; i ++) {
        shuffledNums.push_back(nums[i]);
        shuffledNums.push_back(nums[i + n]);
    }

    return shuffledNums;
}

int main()
{
    vector<int> nums;
    int n = 3;

    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(7);

    auto test = shuffle(nums, n);

    cout << "Done \n";
}