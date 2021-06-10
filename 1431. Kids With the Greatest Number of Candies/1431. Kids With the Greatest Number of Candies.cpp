// 1431. Kids With the Greatest Number of Candies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int findMaxElement(vector<int> elements) {
    int maxElement = 0;

    for (int element : elements) {
        if (element > maxElement) maxElement = element;
    }

    return maxElement;
}

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> boolVector;
    int maxElement = findMaxElement(candies);

    for (int element : candies) {
        if (element + extraCandies >= maxElement) {
            boolVector.push_back(true);
        }

        else {
            boolVector.push_back(false);
        }
    }

    return boolVector;
}

int main()
{
    vector<int> candyVector;
    int extraCandies = 3;

    candyVector.push_back(2);
    candyVector.push_back(3);
    candyVector.push_back(5);
    candyVector.push_back(1);
    candyVector.push_back(3);

    auto test = kidsWithCandies(candyVector, extraCandies);

    cout << "Done \n";
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
