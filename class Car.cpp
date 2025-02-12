#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    float price;
    int mileage;


    // Constructor
    Car(string b, string m, float p, int mi) {
        brand = b;
        model = m;
        price = p;
        mileage = mi;
    }

    // Display function
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Drive function
    void drive(int distance) {
        mileage += distance;
        cout << "Car driven for " << distance << " miles." << endl;
        cout << "Updated mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    // Creating a Car object with given details
    Car myCar("Toyota", "Corolla", 20000, 5000);

    // Displaying initial car details
    myCar.display();

    // Driving the car for 150 miles
    myCar.drive(150);

    // Driving the car for 300 miles
    myCar.drive(300);

    return 0;
}
