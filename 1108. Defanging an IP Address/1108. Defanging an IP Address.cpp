// 1108. Defanging an IP Address.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <regex>

using namespace std;

string defangIPaddr(string address) {
    return regex_replace(address, regex("\\."), "[.]");
}

int main()
{
    cout << defangIPaddr("1.1.1.1");
}