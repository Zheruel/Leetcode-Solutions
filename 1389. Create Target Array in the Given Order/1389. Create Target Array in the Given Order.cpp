// 1389. Create Target Array in the Given Order.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> targetArray;

    for (int i = 0; i < nums.size(); i++) {
        targetArray.insert(targetArray.begin() + index[i], nums[i]);
    }

    return targetArray;
}

int main()
{
    vector<int> nums = { 0,1,2,3,4 };
    vector<int> index = { 0,1,2,2,1 };

    auto test = createTargetArray(nums, index);
    std::cout << "Hello World!\n";
}
