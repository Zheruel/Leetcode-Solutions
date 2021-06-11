// 1365. How Many Numbers Are Smaller Than the Current Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> sortedVector = nums;
    int counter = 0;
    int duplicateCounter = 0;
    int duplicateIdentifier = 0;
    map<int, int> numCount;

    sort(sortedVector.begin(), sortedVector.end(), greater<>());

    for (int num : sortedVector) {
        if (!numCount[num]) {
            duplicateIdentifier = counter + 1;

            while (true) {
                if (duplicateIdentifier >= sortedVector.size()) {
                    break;
                }

                if (num != sortedVector[duplicateIdentifier]) {
                    break;
                }

                duplicateCounter++;
                duplicateIdentifier++;
            }

            numCount[num] = nums.size() - counter - duplicateCounter - 1;
            duplicateCounter = 0;
        }
        
        counter++;
    }
    
    counter = 0;

    for (int num : nums) {
        nums[counter] = numCount.find(num)->second;
        counter++;
    }

    return nums;
}

int main()
{
    vector<int> nums;
    nums.push_back(8);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);

    auto test = smallerNumbersThanCurrent(nums);

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
