// 1880. Check if Word Equals Summation of Two Words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> CreateNumberVector(string word) {
    vector<int> wordVector;

    for (int i = 0; i < word.length(); i++) {
        if (i == 0) {
            if ((int)word[i] - 97 == 0) continue;
        }

        wordVector.push_back((int)word[i] - 97);
    }

    return wordVector;
}

int VectorToInt(vector<int> vector) {
    int result = 0;
    for (auto d : vector)
    {
        result = result * 10 + d;
    }

    return result;
}

bool IsSumEqual(string firstWord, string secondWord, string targetWord) {
    int firstInteger = VectorToInt(CreateNumberVector(firstWord));
    int secondInteger = VectorToInt(CreateNumberVector(secondWord));
    int targetInteger = VectorToInt(CreateNumberVector(targetWord));

    return (firstInteger + secondInteger == targetInteger) ? true : false;
}

int main()
{
    cout << IsSumEqual("acb", "cba", "cdb");
}
