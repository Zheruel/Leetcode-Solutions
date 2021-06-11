// 1512. Number of Good Pairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int numOfPairs = 0;
    int counter = 0;

    for (int num : nums) {
        for (int i = counter + 1; i < nums.size(); i++) {
            if (num == nums[i]) {
                numOfPairs++;
            }
        }

        counter++;
    }

    return numOfPairs;
}

int main()
{
    cout << "Done \n";
}