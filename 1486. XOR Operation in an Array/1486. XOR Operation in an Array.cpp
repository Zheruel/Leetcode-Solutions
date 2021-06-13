// 1486. XOR Operation in an Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int xorOperation(int n, int start) {
    int result = start;

    for (int i = 1; i < n; i++) {
        result = result ^ (start + 2 * i);
    }

    return result;
}

int main()
{
    auto test = xorOperation(5, 0);
    std::cout << "Hello World!\n";
}