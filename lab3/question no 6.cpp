#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string make;
    string model;

    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
    }
};

class Car : public Vehicle {
public:
    string engineType;

    void displayInfo() {
    
        Vehicle::displayInfo();
    
        cout << "Engine Type: " << engineType << endl;
    }
};

int main() {
    Car myCar;

    myCar.make = "Toyota";
    myCar.model = "Civic";
    myCar.engineType = "Hybrid";

    cout << "Car Information:" << endl;
    myCar.displayInfo();

}

