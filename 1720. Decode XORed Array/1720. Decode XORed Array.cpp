// 1720. Decode XORed Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> decode(vector<int>& encoded, int first) {
    vector<int> decoded;
    decoded.push_back(first);

    for (int i = 0; i < encoded.size(); i++) {
        decoded.push_back(decoded[i] ^ encoded[i]);
    }

    return decoded;
}

int main()
{
    std::cout << "Hello World!\n";
}