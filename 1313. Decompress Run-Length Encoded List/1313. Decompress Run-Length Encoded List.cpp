// 1313. Decompress Run-Length Encoded List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> decompressedList;

    for (int i = 0; i < nums.size(); i += 2) {
        for (int j = 0; j < nums[i]; j++) {
            decompressedList.push_back(nums[i + 1]);
        }
    }

    return decompressedList;
}

int main()
{
    std::cout << "Hello World!\n";
}