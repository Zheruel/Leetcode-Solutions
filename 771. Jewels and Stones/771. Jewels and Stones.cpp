// 771. Jewels and Stones.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    int numOfJewels = 0;

    for (char jewel : jewels) {
        for (char stone : stones) {
            if (jewel == stone) {
                numOfJewels++;
            }
        }
    }

    return numOfJewels;
}

int main()
{
    cout << "Done \n";
}