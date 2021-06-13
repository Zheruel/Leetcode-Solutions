// 1678. Goal Parser Interpretation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string interpret(string command) {
    string interpretedString;
    int counter = 0;

    while (counter < command.size()) {
        if (command[counter] == '(') {
            if (command[counter + 1] == ')') {
                interpretedString.append("o");
                counter += 2;
            }

            else {
                interpretedString.append("al");
                counter += 4;
            }
        }
        else {
            interpretedString.append("G");
            counter++;
        }
    }

    return interpretedString;
}

int main()
{
    std::cout << "Hello World!\n";
}
