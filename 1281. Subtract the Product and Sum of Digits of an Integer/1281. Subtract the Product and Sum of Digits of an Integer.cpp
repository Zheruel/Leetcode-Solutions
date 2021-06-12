// 1281. Subtract the Product and Sum of Digits of an Integer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int productOfDigits = 1, sumOfDigits = 0, digit;

    while (n) {
        digit = n % 10;
        productOfDigits *= digit;
        sumOfDigits += digit;

        n /= 10;
    }

    return productOfDigits - sumOfDigits;
}

int main()
{
    int n = 234;
    cout << subtractProductAndSum(n);
}
