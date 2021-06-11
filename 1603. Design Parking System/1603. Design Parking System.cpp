// 1603. Design Parking System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>

using namespace std;

class ParkingSystem {
public:
    map<int, int> parkingSpaces;

    ParkingSystem(int big, int medium, int small) {
        parkingSpaces.insert(pair<int, int>(1, big));
        parkingSpaces.insert(pair<int, int>(2, medium));
        parkingSpaces.insert(pair<int, int>(3, small));
    }

    bool addCar(int carType) {
        auto car = parkingSpaces.find(carType);

        if (car->second == 0) {
            return false;
        }

        car->second--;

        return true;
    }
};

int main()
{
    ParkingSystem obj(3, 3, 3);
    obj.addCar(1);

    cout << "Hello World!\n";
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
